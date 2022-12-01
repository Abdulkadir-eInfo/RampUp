#include <iostream>
#include <string>
#include <vector>
#include <thread>

int main()
{
  std::thread myThread;
  {
      std::vector<int> testVar(10, 128);
      std::cout<<"Trying to create thread"<<std::endl;
      myThread = std::thread([=]()
      {
        std::this_thread::sleep_for(std::chrono::seconds(3));for(int i=0; i<10; i++){std::cout<<testVar[i]<<std::endl;}});
  }
  myThread.join();
}