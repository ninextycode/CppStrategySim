#ifndef ACTION_H
#define ACTION_H
#include "../stdafx.h"
#include "../objects/IdHolder.h"

class Engine {};
class Object;

class Action : public IdHolder {
public:
    Action(Object *const affected_object, uint4 id);
    virtual ~Action();
    virtual void updateConsideringConstrains(Engine const *const engine) = 0;
    virtual void perform();
protected:   
    bool performed = false;
    Object *const affected_object;
};

#endif /* ACTION_H */

