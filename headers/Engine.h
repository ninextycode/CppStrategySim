#ifndef ENGINE_H
#define ENGINE_H
#include "stdafx.h"

#include "objects/Object.h"
#include "objects/Soldier.h"
#include "objects/Forest.h"
#include "objects/FlagRtree.h"

class Engine : public Object {
public:
    Engine();
    virtual ~Engine();
    SoldierPtr addSoldier(point2d position);
    ForestPtr addForest(std::vector<point2d> & vertices);
    
private:
    void step();
    std::list<ObjectPtr> objects;
    std::list<ActionPtr> actions;
    
    std::list<SoldierPtr> soldiers;
    std::list<ForestPtr> forests;
    
    FlagRtree soldiersRtree;
    FlagRtree forestsRtree;
};

#endif /* ENGINE_H */

