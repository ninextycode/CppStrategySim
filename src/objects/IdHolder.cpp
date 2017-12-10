#include "../../headers/objects/IdHolder.h"


IdHolder::IdHolder() : id(IdHolder::getId()) {
}

IdHolder::~IdHolder() {
}

uint4 IdHolder::lastid = 0;
uint4 IdHolder::getId() {
    return IdHolder::lastid++;
}

