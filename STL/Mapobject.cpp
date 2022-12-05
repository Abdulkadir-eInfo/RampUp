//Using objects of two classes in maps
#include<iostream>
#include<map>
#include<cstring>
using namespace std;

class name{
    public:
    char str[10];
    name(){
        strcpy(str,"");
    }
    name(const char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

class phone{
    public:
    char str[80];
    phone(){
        strcpy(str,"");
    }
    phone(const char *s){
        strcpy(str,s);
    }
    char *get(){
        return str;
    }
};

bool operator<(name a,name b){
    return strcmp(a.get(),b.get()) != 0;
}

int main(){
    map<name,phone> m1; 
    m1.insert(pair<name,phone>(name("AAA"),phone("999999999")));
    m1.insert(pair<name,phone>(name("BBB"),phone("999888888")));
    m1.insert(pair<name,phone>(name("DDD"),phone("997778888")));

    char str[10];
    cout << "Enter Name: " << endl;
    cin >> str;
    map<name,phone>:: iterator p;
    p=m1.find(name(str).get());

    if(p!=m1.end()){
        //cout << "Name " << p->first.get() << endl;
        cout << "Phone No: " << p->second.get() << endl; 
    }
    else  
        cout << "Name not in directory" << endl;
    return 0;
}