/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ObjectWithId.h
 * Author: maxim
 *
 * Created on November 19, 2017, 8:42 PM
 */

#ifndef IDHOLDER_H
#define IDHOLDER_H

#include "stdafx.h"


class IdHolder {
public:
    IdHolder(uint4 const id);
    virtual ~IdHolder();
    uint4 const id;
private:
    
};

#endif /* OBJECTWITHID_H */

