#include "../headers/objects/ObjectA.h"
#include "../headers/objects/ObjectB.h"
#include "../headers/actions/ActionA.h"
#include "../headers/actions/ActionB.h"
#include "../headers/action_mapping/ImplementationMapFiller.h"


#include "../headers/objects/Forest.h"

int main() {
    Forest f = {};
    ImplementationMapFiller::fill();
    
    
    ObjectPtr o_a0 = std::make_shared<ObjectA>();
    ObjectPtr o_b = std::make_shared<ObjectB>();
    ObjectPtr o_a1 = std::make_shared<ObjectA>();
    
    
    ActionPtr a_a_o_a = std::make_shared<ActionA>(init_list({o_a0}));
    ActionPtr a_a_o_b = std::make_shared<ActionB>(init_list({o_b}));
    ActionPtr a_b_o_a = std::make_shared<ActionA>(init_list({o_a1}));
    ActionPtr a_b_o_b = std::make_shared<ActionB>(init_list({o_b, o_a1, o_a0}));
    
    a_a_o_a->perform();
    a_a_o_b->perform();
    a_b_o_a->perform();
    a_b_o_b->perform();
    
    
    //a_b_o_a->perform();    will throw exception
        

    return 0;

}