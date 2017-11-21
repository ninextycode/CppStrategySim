#ifndef IDHOLDER_H
#define IDHOLDER_H

#include "../stdafx.h"


class IdHolder {
public:
    IdHolder(uint4 const id);
    virtual ~IdHolder();
    uint4 const id;
private:
    
};

#endif /* OBJECTWITHID_H */

