#ifndef ACTION_H
#define ACTION_H
#include "../stdafx.h"
#include "../objects/IdHolder.h"

class Action : public IdHolder, public std::enable_shared_from_this<Action> {
public:
    Action(ObjectPtr actor, EnginePtr en,
            std::initializer_list<ObjectPtr> affected_objects);
    virtual ~Action();
    // every action's perform is just calling the experience method of affected objects, so perform is non-virtual
    void perform();
private:   
    EnginePtr engine;
    ObjectPtr actor;
    bool performed = false;
    std::list<ObjectPtr> const affected_objects;
};

#endif /* ACTION_H */

