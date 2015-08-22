#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include<QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QVector>
#include <QThread>
#include "update.h"
#include "protobuf/ssl_detection.pb.h"
#include "protobuf/ssl_geometry.pb.h"
#include "protobuf/ssl_referee.pb.h"
#include "protobuf/ssl_wrapper.pb.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showEvent(QShowEvent *);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    void setUI(QGraphicsScene *sc);
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
private slots:
    void on_pushButton_clicked();
    void setter();
    void playGame();
    void on_horizontalSlider_valueChanged(int value);
};

#endif // MAINWINDOW_H
