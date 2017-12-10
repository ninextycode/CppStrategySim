#include "../../headers/stdafx.h"
#include "../../headers/actions/InviteToMove.h"

InviteToMove::InviteToMove(ObjectPtr actor,  EnginePtr en,
        std::initializer_list<ObjectPtr> affected_objects)
        : Action(actor,  en, affected_objects) {
}


InviteToMove::~InviteToMove() {
}

