/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ImplementationMapFiller.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 9:45 PM
 */

#include "ImplementationMapFiller.h"



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

