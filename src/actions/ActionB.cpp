#include "../../headers/actions/ActionB.h"

ActionB::ActionB(Object *const o): Action(o, typeid(ActionB).hash_code()) {
}

ActionB::~ActionB() {
}

void ActionB::updateConsideringConstrains(const Engine* const engine) {
    //do nothing
}
