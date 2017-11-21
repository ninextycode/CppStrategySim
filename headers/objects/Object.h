#ifndef OBJECT_H
#define OBJECT_H
#include "../stdafx.h"
#include "../actions/Action.h"
#include "../objects/IdHolder.h"

#include <unordered_map>
#include "../action_mapping/ImplementationMapperObjAct.h"

class Object : public IdHolder{
public:
    Object(uint4 id);
    virtual ~Object();
    virtual void experience(const Action *const a);
    
};

#endif /* OBJECT_H */

