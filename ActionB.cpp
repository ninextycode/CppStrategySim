/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActionB.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 3:06 PM
 */

#include "ActionB.h"

ActionB::ActionB(Object *const o): Action(o, typeid(ActionB).hash_code()) {
}

ActionB::~ActionB() {
}

void ActionB::updateConsideringConstrains(const Engine* const engine) {
    //do nothing
}
