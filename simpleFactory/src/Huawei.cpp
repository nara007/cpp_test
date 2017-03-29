//
// Created by nara007 on 17/3/29.
//
#include <iostream>
#include "../include/Huawei.h"

Huawei::Huawei(const std::string &brand, const std::string& name): Smartphone(name){
    this->brand = new std::string(brand);
}

Huawei::~Huawei() {

    std::cout<<"Huawei delete brand"<<std::endl;
    delete this->brand;
}

void Huawei::work() {
    std::cout<<"this is "<< *brand<<" "<<*name<<std::endl;
}