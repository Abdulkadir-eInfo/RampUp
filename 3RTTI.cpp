// dynamic_cast
#include <stdio.h>
#include <iostream>

class A {
    public:
    virtual void test() {
        std::cout <<"Test A\n" ;
   }
};

class B : public A {
    public:
    virtual void test() {
        std::cout <<"Test B\n";
    }

    void test2() {
        std::cout <<"Test2 in B\n";
    }
};

class C : public B {
    public:
    virtual void test() {
        std::cout <<"Test C\n";
    }

    void test2() {
        std::cout <<"Test2 in C\n";
    }
};

void TestFun(A& a) {
    try {
        C &c = dynamic_cast<C&>(a);
        std::cout <<"Casting Successfull\n";
    }
    catch(std::bad_cast) {
        std::cout <<"Can't cast to C\n";
    }
}

int main() {
    A *ptr_a = new C{};
    A *ptr_a2 = new B{};

    ptr_a->test();
    ptr_a2->test();

    B * ptr_b = dynamic_cast<B *>(ptr_a);
    if (ptr_b) // ptr_b points to object of C
        ptr_b->test2();
    else
        std::cout << "Casting Unsuccessfull 1\n";

    C * ptr_c = dynamic_cast<C *>(ptr_a2);
    if (ptr_c)
        ptr_c->test2();
    else // will not cast as we are trying to cast pointer of derived class to base class object
        std::cout << "Casting Unsuccessfull 2\n";

    C objC;
    TestFun(objC);

    // will fail because B knows nothing about C
    B objB;
    TestFun(objB);
}