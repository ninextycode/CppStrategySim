#ifndef OBJECTB_H
#define OBJECTB_H
#include "Object.h"
#include "../actions/ActionA.h"
#include "../actions/ActionB.h"


class ObjectB : public Object{
public:
    ObjectB();
    virtual ~ObjectB();
    void experienceA(const ActionA * const a);
    void experienceB(const ActionB * const b);
};

#endif /* OBJECTB_H */

