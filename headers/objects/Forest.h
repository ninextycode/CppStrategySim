#ifndef FOREST_H
#define FOREST_H

#include "Object.h"
#include <initializer_list>


class Forest: public Object {
public:
    Forest(std::initializer_list<point2d> l);
    virtual ~Forest();
private:
    polygon coveredRegion;
};

typedef std::shared_ptr<Forest> ForestPtr;
#endif /* FOREST_H */

