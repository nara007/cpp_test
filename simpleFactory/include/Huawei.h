//
// Created by nara007 on 17/3/29.
//

#ifndef SIMPLEFACTORY_HUAWEI_H
#define SIMPLEFACTORY_HUAWEI_H

#include "smartphone.h"

class Huawei:public Smartphone{

private:

    std::string* brand;

public:
    Huawei(const std::string& brand, const std::string& name);

    virtual void work();

    virtual ~Huawei();
};


#endif //SIMPLEFACTORY_HUAWEI_H
