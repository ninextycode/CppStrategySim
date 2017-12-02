#include "../../headers/actions/Action.h"
#include "../../headers/objects/Object.h"

Action::Action(std::initializer_list<std::shared_ptr<Object>> affected_objects, uint4 id) :
IdHolder(id),
affected_objects(affected_objects) {
}

Action::~Action() {
}

void Action::perform() {
    if (!this->performed) {
        for (std::shared_ptr<Object> a : this->affected_objects) {
            a->experience(shared_from_this());
        }
        this->performed = true;
    } else {
        throw std::logic_error("Cannot perform already performed action. "
                "Action class id is " + std::to_string(this->id));
    }
}