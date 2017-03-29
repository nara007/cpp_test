//
// Created by nara007 on 17/3/29.
//

#include "../include/factory.h"
#include "../include/iphone.h"
#include "../include/Huawei.h"

Smartphone* Factory::produceSmartphone(const std::string &name) {

    if(name=="iphone"){
        return new Iphone("iphone", "7");
    }

    else if(name=="huawei"){
        return new Huawei("huawei", "P10");
    }
    else{
        return nullptr;
    }
}
