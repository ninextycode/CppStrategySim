#include "../../headers/actions/Action.h"
#include "../../headers/objects/Object.h"

Action::Action(Object *const affected_object, uint4 id) :
    IdHolder(id),
    affected_object(affected_object) {
}

Action::~Action() {
}

void Action::perform() {
    if(!this->performed) {
        this->affected_object->experience(this);
        this->performed = true;
    } else {
        throw std::logic_error("Cannot perform already performed action. "
                "Action class id is " + std::to_string(this->id) + ", affected object class id is " +
                std::to_string(this->affected_object->id));
    }
}