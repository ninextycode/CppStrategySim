#ifndef SOLDIER_H
#define SOLDIER_H

#include "../stdafx.h"
#include "Object.h"
#include "../actions/InviteToMove.h"

class Soldier : Object {
public:
    static const float body_side;
    static const uint4 id = 2003934;

    Soldier();
    virtual ~Soldier();
    //void move();
    void move(InviteToMove const* const invite);
private:
    point2d velocity;
    box2d body;
};

#endif /* SOLDIER_H */

