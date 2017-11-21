#ifndef OBJECTA_H
#define OBJECTA_H
#include "Object.h"
#include "../actions/ActionA.h"
#include "../actions/ActionB.h"

class ObjectA: public Object {
public:
    ObjectA();
    virtual ~ObjectA();
    void experienceA(ActionA const *const a);
    void experienceB(ActionB const *const b);
private:
    
};

#endif /* OBJECTA_H */

