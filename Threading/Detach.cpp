#include <iostream>
#include <thread>
#include <algorithm>
#include <chrono>
using namespace std;

void func()     
{
    std::cout<<"Worker Thread "<<std::endl;
    this_thread::sleep_for(chrono::milliseconds(50000)); // Sleep for 500 milliseconds
    std::cout<<"Worker Thread Exiting"<<std::endl;

}

int main()  
{
    std::cout<<"Main"<<std::endl;
    std::thread threadObj(func);
    // Program will terminate as we have't called either join or detach with the std::thread object.
    // Hence std::thread's object destructor will terminate the program
    if(threadObj.joinable())
        threadObj.detach();
    this_thread::sleep_for(chrono::milliseconds(5000)); // Sleep for 500 milliseconds
    std::cout<<"MAIN Exiting "<<std::endl;
    return 0;
}