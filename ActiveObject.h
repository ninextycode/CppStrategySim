/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActiveObject.h
 * Author: maxim
 *
 * Created on November 16, 2017, 6:58 PM
 */

#ifndef ACTIVEOBJECT_H
#define ACTIVEOBJECT_H
#include <list>
#include <memory>
#include "Action.h"

class ActiveObject {
public:
    ActiveObject();
    ActiveObject(const ActiveObject& orig);
    virtual ~ActiveObject();
private:

};

#endif /* ACTIVEOBJECT_H */

