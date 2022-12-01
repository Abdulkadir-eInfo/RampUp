#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

int main()
{
    atomic<int> count{0}; // This count variable is shared by two threads simultaneously, but since we are using atomic lock; it will not make any mistakes
    const int ITERATIONS = 1E6;
    thread t1([&count](){
        for(int i=0;i<ITERATIONS;i++)
        {
            ++count;
        }
    });
    thread t2([&count](){
        for(int i=0;i<ITERATIONS;i++)
        {
            ++count;
        }
    });
    t1.join();
    t2.join();
    cout << count << endl;
}