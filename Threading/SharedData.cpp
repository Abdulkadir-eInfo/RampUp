#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int count=0; // This count variable is shared by two threads simultaneously
    const int ITERATIONS = 10000;
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