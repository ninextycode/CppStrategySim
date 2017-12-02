#ifndef ACTIONA_H
#define ACTIONA_H
#include "Action.h"

class ActionA: public Action{
public:
    ActionA(std::initializer_list<std::shared_ptr<Object>> l);
    virtual void updateConsideringConstrains(Engine const *const e);
    
    static const uint4 id = 1;
};

#endif /* ACTIONA_H */

