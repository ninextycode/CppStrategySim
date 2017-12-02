#include "../../headers/stdafx.h"
#include "../../headers/actions/InviteToMove.h"

InviteToMove::InviteToMove(std::initializer_list<std::shared_ptr<Object>> affected_objects)
        : Action(affected_objects, id) {
}


InviteToMove::~InviteToMove() {
}

