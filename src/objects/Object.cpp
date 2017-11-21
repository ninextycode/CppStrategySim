#include "../../headers/objects/Object.h"
#include <iostream>


Object::Object(uint4 id): IdHolder(id) {
}


Object::~Object() {
}

void Object::experience(const Action* const a) {
    ActionExperiencer f = ImplementationMapperObjAct::get_experiencer_or_null(this->id, a->id);
    if(f) {
        (this->*f)(a);
    } else {
        std::cout << "Object with id " << this->id << " doesn't have an experiencer "
                "for an Action with id" << a->id << std::endl;
    }
}


