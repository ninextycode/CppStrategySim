/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActionA.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 3:05 PM
 */

#include "ActionA.h"
#include "Object.h"
#include <iostream>


ActionA::ActionA(Object *const o): Action(o, typeid(ActionA).hash_code()) {
}




void ActionA::updateConsideringConstrains(Engine const * const engine) {
    //nothing
}