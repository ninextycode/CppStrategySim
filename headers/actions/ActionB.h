#ifndef ACTIONB_H
#define ACTIONB_H
#include "Action.h"

class ActionB : public Action{
public:
    ActionB(Object *const o);
    virtual ~ActionB();
    
    virtual void updateConsideringConstrains(const Engine * const engine);

private:

};

#endif /* ACTIONB_H */

