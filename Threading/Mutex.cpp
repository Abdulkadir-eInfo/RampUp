#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int main()
{
    mutex mut_lock;
    int count=0; // This count variable is shared by two threads simultaneously
    const int ITERATIONS = 1E6;
    auto func = [&](){
        for(int i=0;i<ITERATIONS;i++)
        {
            mut_lock.lock();
            ++count; // Critical section
            mut_lock.unlock();
        }
    };
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    cout << count << endl;
}