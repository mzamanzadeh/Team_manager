#ifndef GRAPHIC_NUM_H
#define GRAPHIC_NUM_H
#include <QGraphicsItem>
#include <QImage>
#include <QString>

class NumberGraphicsItem : public QGraphicsItem
{

public:
    NumberGraphicsItem(int num_);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;

    QPainterPath shape() const
    {
        QPainterPath path;
        path.addEllipse(boundingRect());
        return path;
    }

    void setText(QString text_);

    void setColor(Qt::GlobalColor color);
private:
    Qt::GlobalColor myColor;
    int  number;
    QString myText;
};

#endif // GRAPHIC_NUM_H
