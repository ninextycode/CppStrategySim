#ifndef OBJECT_H
#define OBJECT_H
#include "../stdafx.h"
#include "../actions/Action.h"
#include "../objects/IdHolder.h"

#include <unordered_map>

class Object : public IdHolder, public std::enable_shared_from_this<Object> {
public:
    Object();
    virtual ~Object();
};

#endif /* OBJECT_H */

