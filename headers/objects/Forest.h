#ifndef FOREST_H
#define FOREST_H

#include "Object.h"
#include <initializer_list>


class Forest: public Object {
public:
    Forest(std::initializer_list<point2d> l);
    virtual ~Forest();
    static const uint4 id = 404325;
private:
    polygon coveredRegion;
};

#endif /* FOREST_H */

