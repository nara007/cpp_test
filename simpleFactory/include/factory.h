//
// Created by nara007 on 17/3/29.
//

#ifndef SIMPLEFACTORY_FACTORY_H
#define SIMPLEFACTORY_FACTORY_H

#include <string>
#include "smartphone.h"


class Factory {

public:
    static Smartphone* produceSmartphone(const std::string& name);
};


#endif //SIMPLEFACTORY_FACTORY_H
