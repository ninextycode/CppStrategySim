#ifndef SOLDIER_H
#define SOLDIER_H

#include "../stdafx.h"
#include "Object.h"
#include "../actions/InviteToMove.h"

class Soldier : public Object {
public:
    static const float body_side;

    Soldier(point2d position);
    virtual ~Soldier();
    //void move();
    void experience(InviteToMovePtr invite, EnginePtr env);
private:
    point2d velocity;
    box2d body;
};

typedef std::shared_ptr<Soldier> SoldierPtr;

#endif /* SOLDIER_H */

