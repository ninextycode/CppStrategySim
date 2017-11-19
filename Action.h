/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Action.h
 * Author: maxim
 *
 * Created on November 16, 2017, 7:01 PM
 */

#ifndef ACTION_H
#define ACTION_H
#include "stdafx.h"
#include "IdHolder.h"

class Engine;
class Object;

class Action : public IdHolder {
public:
    Action(Object *const affected_object, uint4 id);
    virtual ~Action();
    virtual void updateConsideringConstrains(Engine const *const engine) = 0;
    virtual void perform();
protected:   
    bool performed = false;
    Object *const affected_object;
};

#endif /* ACTION_H */

