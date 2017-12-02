#ifndef INVITETOMOVE_H
#define INVITETOMOVE_H

#include "../stdafx.h"
#include "Action.h"

class InviteToMove : Action {
public:
    static const uint4 id = 975535635;
    InviteToMove();
    InviteToMove(std::initializer_list<std::shared_ptr<Object>> l);
    virtual ~InviteToMove();
private:
    
};

#endif /* INVITETOMOVE_H */

