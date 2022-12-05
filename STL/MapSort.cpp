// C++ program makes a map to store
// elements in descending order
#include <iostream>
#include <map>
#include <cstring>

using namespace std;

struct ltstr
{
    bool operator()(const char* s1, const char* s2) const
    {
        return strcmp(s1, s2) < 0;
    }
};

// Driver Code
int main()
{

// Less, Greater, user-defined sorting function
    map<int, string, less<int> > mymap;
 
    // Inserting the elements one by one
    mymap.insert(make_pair(10, "queen"));
    mymap.insert(make_pair(20, "rose"));
    mymap.insert(make_pair(5, " lion"));

    cout << "First Map" << endl;
    // begin() returns to the first value of map
    map<int, string>::iterator it;
    for (it = mymap.begin(); it != mymap.end(); it++)
        cout << "(" << (*it).first << ", " << (*it).second
             << ")" << endl;

    map<int, string, greater<int> > mymap1;
    cout << "\nSecond Map" << endl;
    // Inserting the elements one by one
    mymap1.insert(make_pair(10, "queen"));
    mymap1.insert(make_pair(20, "rose"));
    mymap1.insert(make_pair(5, " lion"));
 
    // begin() returns to the first value of map
    map<int, string>::iterator it1;
    for (it1 = mymap1.begin(); it1 != mymap1.end(); it1++)
        cout << "(" << (*it1).first << ", " << (*it1).second
             << ")" << endl;

    // map<int, string, ltstr > mymap2;
    // cout << "\nThird Map" << endl;
    // // Inserting the elements one by one
    // mymap2.insert(make_pair(10, "queen"));
    // mymap2.insert(make_pair(20, "rose"));
    // mymap2.insert(make_pair(5, " lion"));
 
    // // begin() returns to the first value of map
    // map<int, string>::iterator it2;
    // for (it2 = mymap2.begin(); it2 != mymap2.end(); it2++)
    //     cout << "(" << (*it2).first << ", " << (*it2).second
    //          << ")" << endl;

    map<const char*, int, ltstr> months;
    cout << "\nThird Map" << endl;
    months["january"] = 31;
    months["february"] = 28;
    months["march"] = 31;
    months["april"] = 30;
    months["may"] = 31;
    months["june"] = 30;
    months["july"] = 31;
    months["august"] = 31;
    months["september"] = 30;
    months["october"] = 31;
    months["november"] = 30;
    months["december"] = 31;

    // cout << "june -> " << months["june"] << endl;

    // map<const char*, int, ltstr>::iterator cur  = months.find("june");
    // map<const char*, int, ltstr>::iterator prev = cur;
    // map<const char*, int, ltstr>::iterator next = cur;

    // ++next;
    // --prev;

    // cout << "Previous (in alphabetical order) is " << (*prev).first << endl;
    // cout << "Next (in alphabetical order) is " << (*next).first << endl;

    for (auto it2 = months.begin(); it2 != months.end(); it2++)
        cout << "(" << (*it2).first << ", " << (*it2).second
             << ")" << endl;

    /* Sorting is available only based on the key*/

    // map<int,const char*, ltstr> months1;
    // cout << "\nFourth Map" << endl;
    // months1[1] = "january";
    // months1[2] = "february";

    // // cout << "june -> " << months["june"] << endl;

    // // map<const char*, int, ltstr>::iterator cur  = months.find("june");
    // // map<const char*, int, ltstr>::iterator prev = cur;
    // // map<const char*, int, ltstr>::iterator next = cur;

    // // ++next;
    // // --prev;

    // // cout << "Previous (in alphabetical order) is " << (*prev).first << endl;
    // // cout << "Next (in alphabetical order) is " << (*next).first << endl;

    // for (auto it2 = months1.begin(); it2 != months1.end(); it2++)
    //     cout << "(" << (*it2).first << ", " << (*it2).second
    //          << ")" << endl;
    return 0;
}