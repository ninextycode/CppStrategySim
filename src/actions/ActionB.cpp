#include "../../headers/actions/ActionB.h"

ActionB::ActionB(std::initializer_list<std::shared_ptr<Object>> l): Action(l, ActionB::id) {
}

ActionB::~ActionB() {
}

void ActionB::updateConsideringConstrains(const Engine* const engine) {
    //do nothing
}
