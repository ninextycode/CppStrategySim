/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Action.cpp
 * Author: maxim
 * 
 * Created on November 16, 2017, 7:01 PM
 */

#include "Action.h"
#include "Object.h"

Action::Action(Object *const affected_object, uint4 id) :
    IdHolder(id),
    affected_object(affected_object) {
}

Action::~Action() {
}

void Action::perform() {
    if(!this->performed) {
        this->affected_object->experience(this);
        this->performed = true;
    } else {
        throw std::logic_error("Cannot perform already performed action. "
                "Action class id is " + std::to_string(this->id) + ", affected object class id is " +
                std::to_string(this->affected_object->id));
    }
}