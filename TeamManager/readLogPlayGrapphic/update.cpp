
#include "update.h"
#include<QDebug>
#include "protobuf/ssl_referee.pb.h"
#include "protobuf/ssl_wrapper.pb.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <stdint.h>
#include <endian.h>
#include <QTimer>
#include "protobuf/ssl_detection.pb.h"
#include "protobuf/ssl_geometry.pb.h"

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
Update::Update(QObject *parent) :
    QThread(parent)
{
}
//void Update::setUI(QVector<QGraphicsEllipseItem> Team1,QVector<QGraphicsEllipseItem> Team2,QGraphicsEllipseItem Ball)
//{
//    this->ball=Ball;
//    this->team1=Team1;
//    this->team2=Team2;
//}

void Update::setUI(QGraphicsScene *sc)
{
    this->scene=sc;
}

void Update::play()
{
    ball->setX(ballX->at(counter));
    ball->setY(ballY->at(counter));
    for(int i = 0;i < 6;i++)
    {
        if(counter < blueRobotsX->at(i)->size()){
        team1->at(i)->setX(blueRobotsX->at(i)->at(counter));
        }
        if(counter < blueRobotsY->at(i)->size()){
        team1->at(i)->setY(blueRobotsY->at(i)->at(counter));
        }
        if(counter < yellowRobotsX->at(i)->size()){
        team2->at(i)->setX(yellowRobotsX->at(i)->at(counter));
        }
        if(counter < yellowRobotsY->at(i)->size()){
        team2->at(i)->setY(yellowRobotsY->at(i)->at(counter++));
        }
    }
}

void Update::run()
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

    ball = scene->addEllipse(0, 0, 80,80);
    ball->setBrush(Qt::green);



    team1=new QVector<QGraphicsRectItem*>();

    for(int i=0;i<6;i++)
    {
        QGraphicsRectItem *rect1=scene->addRect(i*10,i*10+80,100,100);
        rect1->setBrush(Qt::blue);
        team1->push_back(rect1);
    }

    team2=new QVector<QGraphicsRectItem*>();

    for(int i=0;i<6;i++)
    {
        QGraphicsRectItem *rect1=scene->addRect(i*10,i*10+80,100,100);
        rect1->setBrush(Qt::yellow);
        team2->push_back(rect1);
    }



//scene->addRect(rect1);
//ellipse->setX(ellipse->x()+1);

/* if (argc != 2) {
     std::cout << "No input file name specified!" << std::endl;
     std::cout << "Please run \"examplereader <log file>\"." << std::endl;

     return -1;
 }
*/
 const char *filename = "/home/aliarab/Downloads/2013-06-30-130702_cmdragons_zjunlict.log";//argv[1];

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
 connect(timer,SIGNAL(timeout()),this,SLOT(play()));
 timer->start(100);

}
