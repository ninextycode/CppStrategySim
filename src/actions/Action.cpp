#include "../../headers/actions/Action.h"
#include "../../headers/objects/Object.h"

Action::Action(ObjectPtr actor, EnginePtr en, std::initializer_list<ObjectPtr> affected_objects) :
    affected_objects(affected_objects),
    actor(actor),
    engine(en) {
}

Action::~Action() {
}

void Action::perform() {
    if (!this->performed) {
        for (std::shared_ptr<Object> a : this->affected_objects) {
        //    a->experience(shared_from_this());
        }
        this->performed = true;
    } else {
        throw std::logic_error("Cannot perform already performed action. "
                "Action class id is " + std::to_string(this->id));
    }
}