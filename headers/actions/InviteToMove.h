#ifndef INVITETOMOVE_H
#define INVITETOMOVE_H

#include "../stdafx.h"
#include "Action.h"

class InviteToMove : Action {
public:
    InviteToMove();
    InviteToMove(ObjectPtr actor,  EnginePtr en,
            std::initializer_list<ObjectPtr> l);
    virtual ~InviteToMove();
private:
    
};

typedef std::shared_ptr<InviteToMove> InviteToMovePtr;
#endif /* INVITETOMOVE_H */

