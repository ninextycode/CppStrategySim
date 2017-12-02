#ifndef OBJECTB_H
#define OBJECTB_H
#include "Object.h"
#include "../actions/ActionA.h"
#include "../actions/ActionB.h"


class ObjectB : public Object{
public:
    ObjectB();
    virtual ~ObjectB();
    void experienceA(std::shared_ptr<ActionA> a);
    void experienceB(std::shared_ptr<ActionB> b);
    static const uint4 id = 1002;
};

#endif /* OBJECTB_H */

