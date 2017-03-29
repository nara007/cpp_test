//
// Created by nara007 on 17/3/29.
//

#include <iostream>
#include "../include/iphone.h"

Iphone::Iphone(const std::string &brand, const std::string& name):Smartphone(name) {
    this->brand = new std::string(brand);
}

Iphone::~Iphone() {
    delete this->brand;
}

void Iphone::work() {

    std::cout<<"hello this is "<<*brand<<" "<<*name<<std::endl;
}
