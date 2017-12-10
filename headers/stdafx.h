#ifndef STDAFX_H
#define STDAFX_H

#include <exception>
#include <string>
#include <list>
#include <memory>
#include <initializer_list>


#define BOOST_GEOMETRY_EXPERIMENTAL_ENABLE_INITIALIZER_LIST

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/geometries/polygon.hpp>
#include <boost/geometry/index/rtree.hpp>

namespace bg = boost::geometry;
typedef unsigned uint4;
typedef unsigned long long uint8;
typedef bg::model::d2::point_xy<float> point2d;
typedef bg::model::box<point2d> box2d;
typedef bg::model::polygon<point2d> polygon;
typedef bg::index::rtree<std::pair<box2d, unsigned>, bg::index::quadratic<16>> rtree;




class Object;
class Action;
class Engine; 

typedef std::shared_ptr<Object> ObjectPtr;
typedef std::shared_ptr<Action> ActionPtr;
typedef std::shared_ptr<Engine> EnginePtr;

//for make_shared to deduce type of initializer_list
template<typename T>
std:: initializer_list<T> init_list ( std:: initializer_list<T> && l ) {
    return l;
}
#endif /* STDAFX_H */

