//Lists   sort()
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;
    int i;
    for(int i=0;i<10;i++){
        li.push_back(i+20);
    }

    cout << "Size: " << li.size() << endl;
    cout << "contents: " << endl;
    list<int>::iterator p = li.begin();
    while(p!=li.end()){
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";


    for(int i=0;i<10;i++){
        li.push_back(i);
    }
     cout << "contents now: " << endl;
    p = li.begin();
    while(p!=li.end()){
        cout << *p << " ";
        p++;
    }
    cout << "Size: " << li.size() << endl;
    li.sort();
    cout << "Sorted contents now: " << endl;
    p = li.begin();
    while(p!=li.end()){
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";

    cout << "Reverse contents: " << endl;
    
    while(p!=li.begin()){
        p--;
        cout << *p << " ";
        //p--;
    }
    cout << "\n\n";
    
    return 0;
}