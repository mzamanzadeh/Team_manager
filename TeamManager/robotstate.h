#ifndef ROBOTSTATE_H
#define ROBOTSTATE_H

#include "../shared/utility/vector3d.h"
#include "../shared/utility/vector2d.h"
#include <QString>
#include "../shared/sslnamespace.h"


struct RobotState
{
public:
    RobotState();
    RobotState(SSL::Color c, int id);

    Vector3D position;
    Vector3D velocity;

    int ID;
    SSL::Color color;
    void print();
    QString colorIDString();
};

struct BallState
{
public:
    BallState(int id = 0);

    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;

    Vector2D rawVelocity;
    Vector2D displacement;

    int ID;

    void print();
};


#endif // ROBOTSTATE_H
