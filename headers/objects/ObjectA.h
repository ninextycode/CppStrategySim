#ifndef OBJECTA_H
#define OBJECTA_H
#include "Object.h"
#include "../actions/ActionA.h"
#include "../actions/ActionB.h"

class ObjectA: public Object {
public:
    ObjectA();
    virtual ~ObjectA();
    void experienceA(std::shared_ptr<ActionA> a);
    void experienceB(std::shared_ptr<ActionB> b);
    static const uint4 id = 1001;
private:

};

#endif /* OBJECTA_H */

