#include <iostream>
#include <string>
#include <map> 
#include <algorithm>

using namespace std;
int main() {

	map<int, string> Students;
    cout << "Map size is: " << Students.size() << endl;
	Students.insert(std::pair<int, string>(200, "Alice"));
	Students.insert(std::pair<int, string>(201, "John"));
	cout << "Map size is: " << Students.size() << endl;
	cout << endl << "Student List: " << endl;
	for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it) {
		cout << (*it).first << ": " << (*it).second << endl;
	}
    std::map<int, string>::iterator itr = Students.find(201);
	if (itr != Students.end()) {
		std::cout << endl << "Key 201 has the value: => "<< Students.find(201)->second << '\n';
	}

    Students.insert(std::pair<int, string>(203, "Elon"));
    itr = Students.find(200);
    if (itr != Students.end()) {
		Students.erase(itr);
	}
	
    cout << endl << "Student List: " << endl;
	for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it) {
		cout << (*it).first << ": " << (*it).second << endl;
	}
}