//
// Created by nara007 on 17/3/29.
//

#ifndef SIMPLEFACTORY_SMARTPHONE_H
#define SIMPLEFACTORY_SMARTPHONE_H

#include <string>
class Smartphone {

protected:
    std::string* name;
public:
    Smartphone(const std::string&);

    virtual void work() = 0;

    virtual ~Smartphone();
};


#endif //SIMPLEFACTORY_SMARTPHONE_H
