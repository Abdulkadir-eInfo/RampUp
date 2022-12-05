//Maps : map.insert<char,int>(key,value);

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char,int> m;
    int i;
    m.~map();
    //Putting pairs into map
    for(int i=0;i<26;i++){
        m.insert(pair<char,int>('A'+i,65+i));
    }

    char ch;
    cout << "Enter key(uppercase letter):";
    cin >> ch;
    map<char,int>::iterator p;

    p=m.find(ch);
    cout << " At " << p->first << endl;
    if(p!=m.end())
        cout << "Its ASCII value is " << p->second << endl;
    else
        cout << "Key not in map" << endl;
    return 0;
}