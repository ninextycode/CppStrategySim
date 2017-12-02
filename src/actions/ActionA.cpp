#include "../../headers/actions/ActionA.h"
#include "../../headers/objects/Object.h"


ActionA::ActionA(std::initializer_list<std::shared_ptr<Object>> l): Action(l, ActionA::id) {
}




void ActionA::updateConsideringConstrains(Engine const * const engine) {
    //nothing
}