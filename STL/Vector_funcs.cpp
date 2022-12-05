//STL in C++
//Vector implementations
//Insert, Erase, begin, end, clear(), empty(), capacity, size, max_size();
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);
    cout << "Capacity of vector:" << v.capacity() << endl;
    cout << "Size of vector:" << v.size() << endl;
    vector<char>::iterator p;//declaring iterator p
    int i;
    p=v.begin();
    i=0;
    while(p!=v.end()){
        *p = i + 'a';
        p++;
        i++;
    }

    cout << "Reverse contents:\n";
    while(p>=v.begin()){
        p--;
        cout << *p << "  ";
    }
    cout << "\n\n";
    
    cout << "Current contents:\n";
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";

    cout << "Modifying contents using insert" << endl;
    p=v.begin()+1;
    v.insert(p,'Z');//inserting given character at iterator
    p=v.begin()+1;
    v.insert(p,3,'z');//inserting given character at iterator given no. of times
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";

    cout << "Erasing contents\n";
    v.erase(v.begin()+1);//Erasing element at given iterator
    cout << "Modified contents after erase(p)" << endl;
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";

    vector<char>::iterator q;
    p=v.begin()+1;
    q=v.begin()+5;
    v.erase(p,q);
    cout << "Modified contents after erase(p,q)" << endl;
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";

    cout << "Capacity of vector:" << v.capacity() << endl;
    cout << "Size of vector:" << v.size() << endl;
    cout << "Max size of vector can be:" << v.max_size() << endl;

    cout << "Is the given vector empty!!==" << v.empty()<< endl;
    cout << "Clearing all elements from the vector\n";
    v.clear();
    cout << "Cleared contents:" << endl;
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";
    cout << "Is the given vector empty!!==" << v.empty()<< endl;
    cout << "Capacity of vector:" << v.capacity() << endl;
    cout << "Size of vector:" << v.size() << endl;
    return 0;
}