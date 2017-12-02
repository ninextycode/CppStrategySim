#include "../../headers/objects/Object.h"
#include <iostream>


Object::Object(uint4 id): IdHolder(id) {
}


Object::~Object() {
}

void Object::experience(std::shared_ptr<Action> a) {
    ActionExperiencer f = ImplementationMapperObjAct::get_experiencer(this->id, a->id);
    if(f) {
        (this->*f)(a);
    }
}

void Object::do_nothing() {
    //nothing
}


