/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectB.h
 * Author: maxim
 *
 * Created on November 19, 2017, 5:15 PM
 */

#ifndef OBJECTB_H
#define OBJECTB_H
#include "Object.h"
#include "ActionA.h"
#include "ActionB.h"


class ObjectB : public Object{
public:
    ObjectB();
    virtual ~ObjectB();
    void experienceA(const ActionA * const a);
    void experienceB(const ActionB * const b);
};

#endif /* OBJECTB_H */

