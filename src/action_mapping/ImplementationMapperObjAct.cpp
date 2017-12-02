#include "../../headers/../headers/action_mapping/ImplementationMapperObjAct.h"

//initializing map
ImplementationMap ImplementationMapperObjAct::object_action_implementation;


ImplementationMapperObjAct::ImplementationMapperObjAct() {
    //unreachable, never called
}

uint8 ImplementationMapperObjAct::key(uint4 a, uint4 b) {
    return (uint8(a) << 32) | uint8(b);
}

void ImplementationMapperObjAct::register_experiencer(uint4 objectType, uint4 actionType, ActionExperiencer func) {
    uint8 k = ImplementationMapperObjAct::key(objectType, actionType);
    if(object_action_implementation.find(k) != object_action_implementation.end()) {
        throw std::logic_error("Non-unique object-action map key. Object with id " + std::to_string(objectType) + 
                ", action with id " + std::to_string(actionType));
    }
    object_action_implementation.insert({k, func});
}

ActionExperiencer ImplementationMapperObjAct::get_experiencer(uint4 objectType, uint4 actionType) {
    uint8 k = key(objectType, actionType);
    auto iter = object_action_implementation.find(k);
    if (iter != object_action_implementation.end()) {
        return iter->second;
    } else {
        throw std::invalid_argument("Action with id " + std::to_string(actionType) + " is not registered for an object "
                "with id " + std::to_string(objectType));
    }
}