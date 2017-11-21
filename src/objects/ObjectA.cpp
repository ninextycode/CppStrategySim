#include "../../headers/objects/ObjectA.h"
#include <iostream>

ObjectA::ObjectA(): Object(typeid(ObjectA).hash_code()) {
}


ObjectA::~ObjectA() {
}

void ObjectA::experienceA(ActionA const* const a) {
    std::cout << "Action A in Object A" << std::endl;
}

void ObjectA::experienceB(ActionB const* const b) {
    std::cout << "Action B in Object A" << std::endl;
}