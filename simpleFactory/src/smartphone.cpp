//
// Created by nara007 on 17/3/29.
//

#include "../include/smartphone.h"
#include <iostream>


Smartphone::Smartphone(const std::string& name){
    this->name = new std::string(name);
}

Smartphone::~Smartphone() {
    std::cout<<"smartphone delete name"<<std::endl;
    delete this->name;
}
