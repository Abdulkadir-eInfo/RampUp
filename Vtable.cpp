// CPP code to illustrate the pointer reinterpret
#include <iostream>
using namespace std;
class Base
{
public:
    // VirtualTable* __vptr;
    virtual void function1() {};
};

class D1: public Base
{
public:
    virtual void function1() override {};
    virtual void function2() {};
};

class D2: public D1
{
public:
    void function2() override {};
};

int main()
{
    Base obj;
    D1 objD;
}