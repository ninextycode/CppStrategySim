#include "../../headers/action_mapping/ImplementationMapFiller.h"



ImplementationMapFiller::ImplementationMapFiller() {
    //unreachable, never called
}


void ImplementationMapFiller::fill() {
    ImplementationMapperObjAct::register_experiencer(
            typeid(ObjectA).hash_code(), 
            typeid(ActionA).hash_code(), 
            (ActionExperiencer) (&ObjectA::experienceA));
    
    ImplementationMapperObjAct::register_experiencer(
            typeid(ObjectA).hash_code(),
            typeid(ActionB).hash_code(), 
            (ActionExperiencer) (&ObjectA::experienceB));
    
    ImplementationMapperObjAct::register_experiencer(
            typeid(ObjectB).hash_code(),
            typeid(ActionA).hash_code(), 
            (ActionExperiencer) (&ObjectB::experienceA));
    
    ImplementationMapperObjAct::register_experiencer(
            typeid(ObjectB).hash_code(),
            typeid(ActionB).hash_code(), 
            (ActionExperiencer) (&ObjectB::experienceB));
}

