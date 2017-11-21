#ifndef ACTIONA_H
#define ACTIONA_H
#include "Action.h"

class ActionA: public Action{
public:
    ActionA(Object *const o);
    virtual void updateConsideringConstrains(Engine const *const e);
};

#endif /* ACTIONA_H */

