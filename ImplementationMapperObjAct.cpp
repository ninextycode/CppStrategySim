/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectActionImplementations.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 7:31 PM
 */

#include "ImplementationMapperObjAct.h"

//initializing map
ImplementationMap ImplementationMapperObjAct::object_action_implementation;

#include <iostream>

ImplementationMapperObjAct::ImplementationMapperObjAct() {
    //unreachable, never called
}

uint8 ImplementationMapperObjAct::key(uint4 a, uint4 b) {
    return (uint8(a) << 32) | uint8(b);
}

void ImplementationMapperObjAct::register_experiencer(uint4 objectType, uint4 actionType, ActionExperiencer func) {
    uint8 k = ImplementationMapperObjAct::key(objectType, actionType);
    object_action_implementation.insert({k, func});
    //TODO alert/exception on repeated keys
}

ActionExperiencer ImplementationMapperObjAct::get_experiencer_or_null(uint4 objectType, uint4 actionType) {
    uint8 k = key(objectType, actionType);
    auto iter = object_action_implementation.find(k);
    if (iter != object_action_implementation.end()) {
        return iter->second;
    } else {
        return NULL;
    }
}