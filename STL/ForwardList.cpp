// Forward List
#include <forward_list>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// Initializing forward list
	forward_list<int> flist = { 10, 20, 30, 40, 50 };

	// Inserting value using push_front()
	// Inserts 60 at front
	flist.push_front(60);

	// Displaying the forward list
	cout
		<< "The forward list after push_front operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	// Inserting value using emplace_front()
	// Inserts 70 at front
	flist.emplace_front(70);

	// Displaying the forward list
	cout << "The forward list after emplace_front operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	// Deleting first value using pop_front()
	// Pops 70
	flist.pop_front();

	// Displaying the forward list
	cout << "The forward list after pop_front operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

    // Declaring a forward list iterator
    forward_list<int>::iterator ptr;

    ptr = flist.insert_after(flist.begin(), { 1, 2, 3 });
 
    // Displaying the forward list
    cout << "The forward list after insert_after operation : ";
    for (int& c : flist)
        cout << c << " ";
    cout << endl;

    // Deleting value using erase.after Deleted 2
    // after ptr
    ptr = flist.erase_after(ptr);
    cout << "The forward list after erase_after operation : ";
    // Displaying the forward list
    for (int& c : flist)
    cout << c << " ";
    cout << endl;

    flist.clear();
    // Forward List becomes empty

    // Printing the Forward list
    cout<<"Forward list after using clear function: ";
    for (auto it = flist.begin(); it != flist.end(); ++it)
        cout << ' ' << *it;
    cout<<endl;

	return 0;
}
