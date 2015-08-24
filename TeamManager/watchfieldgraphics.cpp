#include "watchfieldgraphics.h"
#include "../TeamManager/ui_watchfieldgraphics.h"
#include "general.h"
#include <QDebug>
//#include "protobuf/ssl_referee.pb.h"
//#include "protobuf/ssl_wrapper.pb.h"
//#include "protobuf/ssl_detection.pb.h"
//#include "protobuf/ssl_geometry.pb.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <stdint.h>
#include <endian.h>
#include "proto/vision/cpp/ssl_referee.pb.h"
#include "proto/vision/cpp/messages_robocup_ssl_wrapper.pb.h"
#include "proto/vision/cpp/messages_robocup_ssl_wrapper_legacy.pb.h"
#include "proto/vision/cpp/messages_robocup_ssl_detection.pb.h"
#include "proto/vision/cpp/messages_robocup_ssl_geometry.pb.h"
#include "proto/vision/cpp/messages_robocup_ssl_geometry_legacy.pb.h"


using namespace SSL;
struct FileHeader
{
    char name[12]; // SSL_LOG_FILE
    int32_t version; // Default file format is version 1
};

const char* DEFAULT_FILE_HEADER_NAME = "SSL_LOG_FILE";
const int32_t DEFAULT_FILE_VERSION = 1;

struct DataHeader
{
    int64_t timestamp; // Timestamp in ns
    int32_t messageType; // Message type
    int32_t messageSize; // Size of protobuf message in bytes
};

enum MessageType
{
    MESSAGE_BLANK = 0,
    MESSAGE_UNKNOWN = 1,
    MESSAGE_SSL_VISION_2010 = 2,
    MESSAGE_SSL_REFBOX_2013 = 3
};
WatchFieldGraphics::WatchFieldGraphics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WatchFieldGraphics)
{
    //if(blueRobotsX==NULL)
        //setter();
    ui->setupUi(this);
    view = new FieldGraphicsView(&scene, this);

    ui->mainLayout->addWidget(view);


}

WatchFieldGraphics::~WatchFieldGraphics()
{
    delete ui;
}

void WatchFieldGraphics::drawBounds()
{
    double FIELD_MAIN_LENGHT = 7400;
    double FIELD_MAIN_WIDTH = 5400;
    scene.setSceneRect(-FIELD_MAIN_LENGHT/2, -FIELD_MAIN_WIDTH/2, FIELD_MAIN_LENGHT, FIELD_MAIN_WIDTH);
//    scene.setSceneRect(-FIELD_MAIN_LENGHT/2, -FIELD_MAIN_WIDTH/2, FIELD_MAIN_LENGHT, FIELD_MAIN_WIDTH);

    scene.addRect(-FIELD_MAIN_LENGHT/2, -FIELD_MAIN_WIDTH/2,
                  FIELD_MAIN_LENGHT, FIELD_MAIN_WIDTH,QPen(Qt::green),QBrush(Qt::green));

    QPen drawBoundsPen(Qt::white);
    scene.addLine(-FIELD_LENGTH/2, -FIELD_WIDTH/2, -FIELD_LENGTH/2, FIELD_WIDTH/2, drawBoundsPen);
    scene.addLine(FIELD_LENGTH/2, -FIELD_WIDTH/2, FIELD_LENGTH/2, FIELD_WIDTH/2, drawBoundsPen);
    scene.addLine(-FIELD_LENGTH/2, -FIELD_WIDTH/2, FIELD_LENGTH/2, -FIELD_WIDTH/2, drawBoundsPen);
    scene.addLine(-FIELD_LENGTH/2, FIELD_WIDTH/2, FIELD_LENGTH/2, FIELD_WIDTH/2, drawBoundsPen);

    // half-field line
    scene.addLine(0, -FIELD_WIDTH/2, 0, FIELD_WIDTH/2, drawBoundsPen);
    scene.addEllipse(-FIELD_CENTER_RADIUS, -FIELD_CENTER_RADIUS, FIELD_CENTER_RADIUS*2, FIELD_CENTER_RADIUS*2, drawBoundsPen);

    QPainterPath leftPenaltyArea;
    leftPenaltyArea.moveTo(-FIELD_LENGTH/2, -FIELD_PENALTY_AREA_RADIUS - FIELD_PENALTY_AREA_WIDTH/2);
    leftPenaltyArea.arcTo(-FIELD_LENGTH/2 - FIELD_PENALTY_AREA_RADIUS, -FIELD_PENALTY_AREA_WIDTH/2-FIELD_PENALTY_AREA_RADIUS,
                       2*FIELD_PENALTY_AREA_RADIUS,2*FIELD_PENALTY_AREA_RADIUS,90,-90);
    leftPenaltyArea.arcTo(-FIELD_LENGTH/2-FIELD_PENALTY_AREA_RADIUS,FIELD_PENALTY_AREA_WIDTH/2-FIELD_PENALTY_AREA_RADIUS,
                       2*FIELD_PENALTY_AREA_RADIUS,2*FIELD_PENALTY_AREA_RADIUS,0,-90);
    scene.addPath(leftPenaltyArea, drawBoundsPen);

    QPainterPath Goal1;
    Goal1.moveTo(-FIELD_LENGTH/2,-FIELD_GOAL_WIDTH/2);
    Goal1.lineTo(-FIELD_LENGTH/2-180,-FIELD_GOAL_WIDTH/2);
    Goal1.lineTo(-FIELD_LENGTH/2-180,FIELD_GOAL_WIDTH/2);
    Goal1.lineTo(-FIELD_LENGTH/2,FIELD_GOAL_WIDTH/2);
    scene.addPath(Goal1,QPen(QColor(Qt::black),20));

    QPainterPath rightPenaltyArea;
    rightPenaltyArea.moveTo(FIELD_LENGTH/2, -FIELD_PENALTY_AREA_RADIUS - FIELD_PENALTY_AREA_WIDTH/2);
    rightPenaltyArea.arcTo(FIELD_LENGTH/2 - FIELD_PENALTY_AREA_RADIUS, -FIELD_PENALTY_AREA_WIDTH/2-FIELD_PENALTY_AREA_RADIUS,
                       2*FIELD_PENALTY_AREA_RADIUS,2*FIELD_PENALTY_AREA_RADIUS,90,90);
    rightPenaltyArea.arcTo(FIELD_LENGTH/2-FIELD_PENALTY_AREA_RADIUS,FIELD_PENALTY_AREA_WIDTH/2-FIELD_PENALTY_AREA_RADIUS,
                       2*FIELD_PENALTY_AREA_RADIUS,2*FIELD_PENALTY_AREA_RADIUS,180,90);
    scene.addPath(rightPenaltyArea, drawBoundsPen);

    QPainterPath Goal2;
    Goal2.moveTo(FIELD_LENGTH/2,-FIELD_GOAL_WIDTH/2);
    Goal2.lineTo(FIELD_LENGTH/2+180,-FIELD_GOAL_WIDTH/2);
    Goal2.lineTo(FIELD_LENGTH/2+180,FIELD_GOAL_WIDTH/2);
    Goal2.lineTo(FIELD_LENGTH/2,FIELD_GOAL_WIDTH/2);
    scene.addPath(Goal2,QPen(QColor(Qt::black),20));
}

void WatchFieldGraphics::updateRobotState(const RobotState &st)
{
    int team = (int)st.color;
    if(team >=2 || st.ID >= MAX_ID_NUM)
    {
        qDebug() << "invalid robot state";
        return;
    }
    robot[team][st.ID]->setPos(st.position.X(), -st.position.Y()); // ok
    robot[team][st.ID]->setRotation(-st.position.Teta() * 180.0/M_PI); // ok

    number[team][st.ID]->setPos(st.position.X(), -st.position.Y());


//    robotActualVel[team][id]->setEnd(20*st.velocity.X(), -20*st.velocity.Y());

//    if(isShowingIntersects)
//        robotIntersect[team][id]->setRobotPosition(st.position.X(),-st.position.Y());

//    if(st.color == ourColor) {
//        desiredVel[id]->setPos(st.position.X(), -st.position.Y());
//        appliedVel[id]->setPos(st.position.X(), -st.position.Y());
    //    }

}

void WatchFieldGraphics::updateBallState(const BallState &st)
{
//    qDebug()<<"ball position : "<< st.position.X() << st.position.Y();
    ball->setPos(st.position.X(), -st.position.Y());
    ballVel->setEnd(st.velocity.X(), -st.velocity.Y());
    ballTail->setNewPosition(QVector2D(st.position.X(), st.position.Y()));
}
void WatchFieldGraphics::initializeQVectors(const char * filename)
{
    blueRobotsX = new QVector <QVector <double> *> ();
    blueRobotsY = new QVector <QVector <double> *> ();

    yellowRobotsX = new QVector <QVector <double> *> ();
    yellowRobotsY = new QVector <QVector <double> *> ();

    ballX = new QVector <double>();
    ballY = new QVector <double>();

    for(int i = 0 ;i < 6;i++)
    {
        QVector <double> *vec = new QVector <double> ();
        blueRobotsX->push_back(vec);
    }
    for(int i = 0 ;i < 6;i++)
    {
        QVector <double> *vec = new QVector <double> ();
        blueRobotsY->push_back(vec);
    }

    for(int i = 0 ;i < 6;i++)
    {
        QVector <double> *vec = new QVector <double> ();
        yellowRobotsX->push_back(vec);
    }
    for(int i = 0 ;i < 6;i++)
    {
        QVector <double> *vec = new QVector <double> ();
        yellowRobotsY->push_back(vec);
    }

counter=0;

//const char *filename = "/home/mohammad/Downloads/2013-06-30-130702_cmdragons_zjunlict.log";//argv[1];
//const char *filename=logFileName;

std::ifstream in(filename, std::ios_base::in | std::ios_base::binary);

if (!in.is_open()) {
    std::cerr << "Error opening log file \"" << filename << "\"!" << std::endl;
}

FileHeader fileHeader;
in.read((char*) &fileHeader, sizeof(fileHeader));
// Log data is stored big endian, convert to host byte order
fileHeader.version = be32toh(fileHeader.version);

if (strncmp(fileHeader.name, DEFAULT_FILE_HEADER_NAME, sizeof(fileHeader.name)) == 0) {
    std::cout << "File format version " << fileHeader.version << " detected." << std::endl;

    if (fileHeader.version == DEFAULT_FILE_VERSION) {
        unsigned long refereePackets = 0;
        unsigned long visionPackets = 0;

        while (!in.eof()) {
            DataHeader dataHeader;
in.read((char*) &dataHeader, sizeof(dataHeader));

            // Log data is stored big endian, convert to host byte order
            dataHeader.timestamp = be64toh(dataHeader.timestamp);
            dataHeader.messageType = be32toh(dataHeader.messageType);
            dataHeader.messageSize = be32toh(dataHeader.messageSize);

            if(dataHeader.messageSize<0)
                continue;
            char* data = new char[dataHeader.messageSize];
            in.read(data, dataHeader.messageSize);

            if (dataHeader.messageType == MESSAGE_SSL_VISION_2010) {
                SSL_WrapperPacket packet;
                if (packet.ParseFromArray(data, dataHeader.messageSize)) {
                    visionPackets++;
                   // std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << (double) dataHeader.timestamp / 1e9
                     //        << ": Read " << visionPackets << " vision packets and " << refereePackets << " referee packets!" << std::endl;
                   if(packet.detection().balls().size()>0)
                   {
                       //std::cout<<"ball:  "<<packet.detection().balls().Get(0).x()<<"  y="<<packet.detection().balls().Get(0).y();
                       ballX->push_back(packet.detection().balls().Get(0).x());
                       ballY->push_back(packet.detection().balls().Get(0).y());

                   }
                   if(packet.detection().robots_blue().size() > 0)
                   {
                       for(int i=0;i<packet.detection().robots_blue_size();i++)
                         {
                           blueRobotsX->at(i)->push_back(packet.detection().robots_blue(i).x());
                           blueRobotsY->at(i)->push_back(packet.detection().robots_blue(i).y());
                         }
                   }

                   if(packet.detection().robots_yellow_size() > 0)
                   {
                       for(int i=0;i<packet.detection().robots_yellow_size();i++)
                         {
                           yellowRobotsX->at(i)->push_back(packet.detection().robots_yellow(i).x());
                           yellowRobotsY->at(i)->push_back(packet.detection().robots_yellow(i).y());
                         }
                   }
                } else {
                    std::cerr << "Error parsing vision packet!" << std::endl;
                }
            } else if (dataHeader.messageType == MESSAGE_SSL_REFBOX_2013) {
                SSL_Referee packet;
                if (packet.ParseFromArray(data, dataHeader.messageSize)) {
                    refereePackets++;
                  //  std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << (double) dataHeader.timestamp / 1e9
                    //          << ": Read " << visionPackets << " vision packets and " << refereePackets << " referee packets!" << std::endl;
                } else {
                    std::cerr << "Error parsing vision packet!" << std::endl;
                }
            }

            delete data;
        }
    }
} else {
    std::cerr << "Error log file is unsupported or corrupted!" << std::endl;
}
timer = new QTimer;
connect(timer,SIGNAL(timeout()),this,SLOT(updateGUI()));
timer->start(100);
qDebug()<<"initialize";
}
void WatchFieldGraphics::updateGUI()
{
    for(int tm=0; tm<2; tm++)
        for(int i=0; i< MAX_ID_NUM; i++)
        {
            Qt::GlobalColor robot_color = ((SSL::Color)tm == SSL::Yellow)? Qt::yellow : Qt::blue;
            robot[tm][i] = new RobotGraphicsItem(robot_color, i);
            robot[tm][i]->setZValue(2);
            scene.addItem(robot[tm][i]);

            number[tm][i] = new NumberGraphicsItem(i);
            number[tm][i]->setColor(((Color)tm == Yellow)? Qt::yellow : Qt::blue);
            number[tm][i]->setZValue(3);
//            number[tm][i]->setParentItem(robot[tm][i]);
            scene.addItem(number[tm][i]);


            RobotState rs_;
            rs_.ID = i;
            rs_.color = (Color)tm;
            //rs_.position.setX(blueRobotsX->at(i)->at(++counter));

//            qDebug()<<blueRobotsX->size();
            updateRobotState(rs_);

            qDebug()<<"updsteGUI";
        }


    ball = new CircleGraphicsItem(22, QColor(255,120,0));
    scene.addItem(ball);
    ball->setZValue(7);

    ballVel = new VectorGraphicsItem(Qt::cyan);
    ballVel->setParentItem(ball);
    ballVel->setZValue(8);

    ballTail = new BallGraphicsItem(Qt::red);
    scene.addItem(ballTail);
    ballTail->setZValue(9);


    drawBounds();
}

