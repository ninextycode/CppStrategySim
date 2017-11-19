/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectA.h
 * Author: maxim
 *
 * Created on November 19, 2017, 3:01 PM
 */

#ifndef OBJECTA_H
#define OBJECTA_H
#include "Object.h"
#include "ActionA.h"
#include "ActionB.h"

class ObjectA: public Object {
public:
    ObjectA();
    virtual ~ObjectA();
    void experienceA(ActionA const *const a);
    void experienceB(ActionB const *const b);
private:
    
};

#endif /* OBJECTA_H */

