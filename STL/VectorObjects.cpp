#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyClass
{
    int x;
    public:
    // MyClass(){
    //     cout << "Constructor" << endl;
    // }
    MyClass(int z=1)
    {
        cout<< "Parameterized Constructor" << endl;
        x=z;
    }
    int get()
    {
        return x;
    }
};


int main()
{
    vector<MyClass> ClassVector;
    
    ClassVector.push_back(MyClass{});
    ClassVector.push_back(MyClass{10});
    ClassVector.push_back(MyClass{20});

    for (auto itr = ClassVector.begin(); itr != ClassVector.end();
         itr++)
        cout << (*itr).get() << "  ";
    

    for (auto itr=ClassVector.begin(); itr != ClassVector.end();)
        itr=ClassVector.erase(itr);

    for (auto itr = ClassVector.begin(); itr != ClassVector.end(); itr++)
        cout << (*itr).get() << "  ";
    return 0;
}