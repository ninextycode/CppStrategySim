/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectB.cpp
 * Author: maxim
 * 
 * Created on November 19, 2017, 5:15 PM
 */

#include "ObjectB.h"
#include <iostream>


ObjectB::ObjectB(): Object(typeid(ObjectB).hash_code()) {
}

ObjectB::~ObjectB() {
}

void ObjectB::experienceA(const ActionA* const a) {
    std::cout << "Action A in Object B" << std::endl;
}

void ObjectB::experienceB(const ActionB* const b) {
    std::cout << "Action B in Object B" << std::endl;
}
