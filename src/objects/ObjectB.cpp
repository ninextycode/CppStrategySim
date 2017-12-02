#include "../../headers/objects/ObjectB.h"
#include <iostream>


ObjectB::ObjectB(): Object(ObjectB::id) {
}

ObjectB::~ObjectB() {
}

void ObjectB::experienceA(std::shared_ptr<ActionA> a) {
    std::cout << "Action A in Object B" << std::endl;
}

void ObjectB::experienceB(std::shared_ptr<ActionB> b) {
    std::cout << "Action B in Object B" << std::endl;
}
