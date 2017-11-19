/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Object.h
 * Author: maxim
 *
 * Created on November 16, 2017, 6:45 PM
 */

#ifndef OBJECT_H
#define OBJECT_H
#include "stdafx.h"
#include "Action.h"
#include "IdHolder.h"

#include <unordered_map>
#include "ImplementationMapperObjAct.h"

class Object : public IdHolder{
public:
    Object(uint4 id);
    virtual ~Object();
    virtual void experience(const Action *const a);
    
};

#endif /* OBJECT_H */

