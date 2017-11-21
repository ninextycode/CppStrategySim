#include <cstdlib>
#include "../headers/objects/ObjectA.h"
#include "../headers/objects/ObjectB.h"
#include "../headers/actions/ActionA.h"
#include "../headers/actions/ActionB.h"
#include "../headers/action_mapping/ImplementationMapFiller.h"

using namespace std;


int main(int argc, char** argv) {
   
    ImplementationMapFiller::fill();
    
    
    Object *o_a = new ObjectA();
    Object *o_b = new ObjectB();
    Object *o_a1 = new ObjectA();
    
    Action *a_a_o_a = new ActionA(o_a);
    Action *a_a_o_b = new ActionA(o_b);
    Action *a_b_o_a = new ActionB(o_a1);
    Action *a_b_o_b = new ActionB(o_b);
    
    a_a_o_a->perform();
    a_a_o_b->perform();
    a_b_o_a->perform();
    a_b_o_b->perform();
    
    
    //a_b_o_a->perform();    will throw exception
        
    delete 
            a_a_o_a, 
            a_a_o_b,
            a_b_o_a,
            a_b_o_b,
            o_a, o_a1, o_b;
    return 0;
}

