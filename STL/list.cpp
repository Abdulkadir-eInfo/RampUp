//Create a list; push_back(); begin(); end(); iterator; size();
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;
    int i;
    for(int i=0;i<10;i++){
        li.push_back(i);
    }

    cout << "Size: " << li.size() << endl;
    cout << "contents: " << endl;
    list<int>::iterator p = li.begin();
    while(p!=li.end()){
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";

    p=li.begin();
    while(p!=li.end()){
        *p=*p+100;
        p++;
    }

    p=li.begin();
    cout << "Modified contents: " << endl;
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