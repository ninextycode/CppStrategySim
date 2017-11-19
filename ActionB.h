/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActionB.h
 * Author: maxim
 *
 * Created on November 19, 2017, 3:06 PM
 */

#ifndef ACTIONB_H
#define ACTIONB_H
#include "Action.h"

class ActionB : public Action{
public:
    ActionB(Object *const o);
    virtual ~ActionB();
    
    virtual void updateConsideringConstrains(const Engine * const engine);

private:

};

#endif /* ACTIONB_H */

