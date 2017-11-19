/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Object.cpp
 * Author: maxim
 * 
 * Created on November 16, 2017, 6:45 PM
 */

#include "Object.h"
#include <iostream>


Object::Object(uint4 id): IdHolder(id) {
}


Object::~Object() {
}

void Object::experience(const Action* const a) {
    ActionExperiencer f = ImplementationMapperObjAct::get_experiencer_or_null(this->id, a->id);
    if(f) {
        (this->*f)(a);
    } else {
        std::cout << "Object with id " << this->id << " doesn't have an experiencer "
                "for an Action with id" << a->id << std::endl;
    }
}


