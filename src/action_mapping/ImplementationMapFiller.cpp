#include "../../headers/action_mapping/ImplementationMapFiller.h"



ImplementationMapFiller::ImplementationMapFiller() {
    //unreachable, never called
}


void ImplementationMapFiller::fill() {
    ImplementationMapperObjAct::register_experiencer(
            ObjectA::id, 
            ActionA::id, 
            (ActionExperiencer) (&ObjectA::experienceA));
    
    ImplementationMapperObjAct::register_experiencer(
            ObjectA::id, 
            ActionB::id, 
            (ActionExperiencer) (&ObjectA::experienceB));
    
    ImplementationMapperObjAct::register_experiencer(
            ObjectB::id, 
            ActionA::id, 
            (ActionExperiencer) (&ObjectB::experienceA));
    
    ImplementationMapperObjAct::register_experiencer(
            ObjectB::id, 
            ActionB::id, 
            (ActionExperiencer) (&ObjectB::experienceB));
   

}

