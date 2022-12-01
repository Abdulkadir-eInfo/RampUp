#include <iostream>
#include <thread>
#include <mutex>
#include <functional>
 
void MyFunc();

class X {
    std::recursive_mutex m;
    std::function<void()> cb= std::bind(MyFunc);
  public:
    void fun1() {
      m.lock();
      std::cout << "in fun1" << '\n';
      // fun2();
      cb();
      std::cout << "Exiting fun1"<< '\n';
      m.unlock();
    }
    void fun2() {
      m.lock();
      std::cout << "in fun2" << '\n';
      std::cout << "Exiting fun2" << '\n';
      m.unlock();
    };
};


void MyFunc()
{
    X obj1;
    std::cout << "in MyFunc, calling fun2()" << '\n';
    obj1.fun2();
}


int main() 
{
    X x;
    std::thread t1(&X::fun1,&x);
    t1.join();
    return 0;
}