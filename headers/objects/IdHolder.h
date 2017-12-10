#ifndef IDHOLDER_H
#define IDHOLDER_H

#include "../stdafx.h"


class IdHolder {
public:
    IdHolder();
    virtual ~IdHolder();
    uint4 const id;
protected:
    static uint4 getId();
private:
    static uint4 lastid;
};

#endif /* OBJECTWITHID_H */

