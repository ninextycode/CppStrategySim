/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectA.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 3:01 PM
 */

#include "ObjectA.h"
#include <iostream>

ObjectA::ObjectA(): Object(typeid(ObjectA).hash_code()) {
}


ObjectA::~ObjectA() {
}

void ObjectA::experienceA(ActionA const* const a) {
    std::cout << "Action A in Object A" << std::endl;
}

void ObjectA::experienceB(ActionB const* const b) {
    std::cout << "Action B in Object A" << std::endl;
}