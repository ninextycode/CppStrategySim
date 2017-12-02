#ifndef OBJECT_H
#define OBJECT_H
#include "../stdafx.h"
#include "../actions/Action.h"
#include "../objects/IdHolder.h"

#include <unordered_map>
#include "../action_mapping/ImplementationMapperObjAct.h"

class Object : public IdHolder, public std::enable_shared_from_this<Object> {
public:
    Object(uint4 id);
    virtual ~Object();
    virtual void experience(std::shared_ptr<Action> a);
    void do_nothing(); //to explicitly state that some objects experience nothing from some actions
};

#endif /* OBJECT_H */

