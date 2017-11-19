/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectActionImplementations.h
 * Author: maxim
 *
 * Created on November 19, 2017, 7:31 PM
 */

#ifndef IMPLEMENTATIONMAPPEROBJACT_H
#define IMPLEMENTATIONMAPPEROBJACT_H
#include "stdafx.h"
#include <unordered_map>
#include <functional>

class Object;
class Action;


typedef void (Object::*ActionExperiencer)(Action const *const action);
typedef std::unordered_map<uint8, ActionExperiencer> ImplementationMap;

class ImplementationMapperObjAct {
public:
    
    static void register_experiencer(uint4 objectType, uint4 actionType, ActionExperiencer func);
    static ActionExperiencer get_experiencer_or_null(uint4 objectType, uint4 actionType);
protected:
    static uint8 key(uint4 a, uint4 b);
    static ImplementationMap object_action_implementation;
    ImplementationMapperObjAct();
};

#endif /* OBJECTACTIONIMPLEMENTATIONS_H */

