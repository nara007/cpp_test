#include <iostream>
#include "./include/smartphone.h"
#include "./include/Huawei.h"
#include "./include/iphone.h"
#include "./include/factory.h"
using namespace std;

int main() {

//    Huawei myPhone("huawei", "P10");
//    myPhone.work();
//
//    Iphone iphone("iphone", "7");
//    iphone.work();


//    Smartphone* one = Factory::produceSmartphone("iphone");
//    Smartphone* two = Factory::produceSmartphone("huawei");
//    one->work();
//    two->work();

    shared_ptr<Smartphone> one(Factory::produceSmartphone("iphone"));
    shared_ptr<Smartphone> two(Factory::produceSmartphone("huawei"));
    one->work();
    two->work();
    return 0;
}