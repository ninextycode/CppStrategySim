#include "../../headers/actions/ActionA.h"
#include "../../headers/objects/Object.h"


ActionA::ActionA(Object *const o): Action(o, typeid(ActionA).hash_code()) {
}




void ActionA::updateConsideringConstrains(Engine const * const engine) {
    //nothing
}