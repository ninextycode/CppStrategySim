#ifndef ACTION_H
#define ACTION_H
#include "../stdafx.h"
#include "../objects/IdHolder.h"

class Engine {};

class Action : public IdHolder, public std::enable_shared_from_this<Action> {
public:
    Action(std::initializer_list<std::shared_ptr<Object>> affected_objects, uint4 id);
    virtual ~Action();
    // updateConsideringConstrains is pure virtual because I want to force explicit declaration of the changes forced by
    // the current state, or explicit declaration of their absence
    virtual void updateConsideringConstrains(Engine const *const engine) = 0;
    // every action's perform is just calling the experience method of affected objects, so perform is non-virtual
    void perform();
protected:   
    bool performed = false;
    std::list<std::shared_ptr<Object>> const affected_objects;
};

#endif /* ACTION_H */

