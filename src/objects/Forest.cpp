#include "../../headers/objects/Forest.h"

Forest::Forest(std::initializer_list<point2d> l): Object(Forest::id), coveredRegion({l}) {
    
}

Forest::~Forest() {
}

