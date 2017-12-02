#ifndef ACTIONB_H
#define ACTIONB_H
#include "Action.h"

class ActionB : public Action{
public:
    ActionB(std::initializer_list<std::shared_ptr<Object>> o);
    virtual ~ActionB();
    
    virtual void updateConsideringConstrains(const Engine * const engine);
    static const uint4 id = 2;
private:

};

#endif /* ACTIONB_H */

