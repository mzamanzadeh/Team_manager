#ifndef UPDATE_H
#define UPDATE_H

#include <QThread>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QMainWindow>
#include"mainwindow.h"
#include <QVector>
#include<QGraphicsScene>

#include "protobuf/ssl_referee.pb.h"
#include "protobuf/ssl_wrapper.pb.h"
#include "protobuf/ssl_detection.pb.h"
#include "protobuf/ssl_geometry.pb.h"
class Update : public QThread
{
    Q_OBJECT
public:
     explicit Update(QObject *parent = 0);

    void run();
    void setUI(QVector<QGraphicsEllipseItem> Team1,QVector<QGraphicsEllipseItem> Team2,QGraphicsEllipseItem Ball);

    void setUI(QGraphicsScene *sc);
    QGraphicsScene *scene;
    QVector  <double>  *ballX;
    QVector  <double> *ballY;


    QVector<QGraphicsRectItem*> *team1;
    QVector<QGraphicsRectItem*> *team2;
    QGraphicsEllipseItem *ball;
    QVector <QVector <double> *> *blueRobotsX;
    QVector <QVector <double> *> *blueRobotsY;

    QVector <QVector <double> *> *yellowRobotsX;
    QVector <QVector <double> *> *yellowRobotsY;

    int counter = 0;
    QTimer *timer;

signals:

public slots:
void play();

};

#endif // UPDATE_H
