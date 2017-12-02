#include "../../headers/objects/ObjectA.h"
#include <iostream>

ObjectA::ObjectA(): Object(ObjectA::id) {
}


ObjectA::~ObjectA() {
}

void ObjectA::experienceA(std::shared_ptr<ActionA>) {
    std::cout << "Action A in Object A" << std::endl;
}

void ObjectA::experienceB(std::shared_ptr<ActionB>) {
    std::cout << "Action B in Object A" << std::endl;
}