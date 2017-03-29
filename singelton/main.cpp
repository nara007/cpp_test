#include <iostream>


class Test{
private:
    Test(){};

    static Test* singelton;

public:

    static Test& getInstance();
    void sayHello();
};

Test* Test::singelton = new Test();

Test& Test::getInstance() {
    return *Test::singelton;
}

void Test::sayHello() {
    std::cout<<"this is called by singelton"<<std::endl;
}

int main() {
    Test::getInstance().sayHello();
    return 0;
}