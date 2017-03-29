//
// Created by nara007 on 17/3/29.
//

#ifndef SIMPLEFACTORY_IPHONE_H
#define SIMPLEFACTORY_IPHONE_H

#include <string>
#include "smartphone.h"

class Iphone: public Smartphone {
protected:
    std::string* brand;

public:
    Iphone(const std::string& brand, const std::string& name);
    virtual void work();
    virtual ~Iphone();
};


#endif //SIMPLEFACTORY_IPHONE_H
