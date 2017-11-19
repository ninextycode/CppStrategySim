/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActionA.h
 * Author: maxim
 *
 * Created on November 19, 2017, 3:05 PM
 */

#ifndef ACTIONA_H
#define ACTIONA_H
#include "Action.h"

class ActionA: public Action{
public:
    ActionA(Object *const o);
    virtual void updateConsideringConstrains(Engine const *const e);
};

#endif /* ACTIONA_H */

