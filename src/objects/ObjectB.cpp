#include "../../headers/objects/ObjectB.h"
#include <iostream>


ObjectB::ObjectB(): Object(typeid(ObjectB).hash_code()) {
}

ObjectB::~ObjectB() {
}

void ObjectB::experienceA(const ActionA* const a) {
    std::cout << "Action A in Object B" << std::endl;
}

void ObjectB::experienceB(const ActionB* const b) {
    std::cout << "Action B in Object B" << std::endl;
}
