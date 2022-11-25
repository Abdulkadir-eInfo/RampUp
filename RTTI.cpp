// Run Time Type Identification successfully With virtual function

#include <iostream>
using namespace std;

//Base class
class B 
{
	public:
	virtual void fun() 
	{
		cout << "\nFunction in Base called" << endl;
	}
};

//Derived class
class D : public B 
{
	public:
	void fun() 
	{
		cout << "\nFunction in Derived called" << endl;
	}
};

// Driver Code
int main()
{
	B* b = new D; // Base class pointer
	D* d = dynamic_cast<D*>(b); // Derived class pointer dynamically casted from Base class pointer
	if (d != NULL)
		cout << "Casting Successfull";
	else
		cout << "cannot cast B* to D*";
	d->fun();
	return 0;
}

