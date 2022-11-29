// C++ program to demonstrate factory method design pattern
#include <iostream>
#include <unistd.h>
#include "Owner.h"
using namespace std;

// Driver program
int main() {
	// Owner *pOwner = new Owner(VT_ThreeWheeler);
	// Vehicle * pVehicle = pOwner->getVehicle();
	// pVehicle->printVehicle();
	Owner *pOwner=nullptr;
	int choice=1;
    cout << "Welcome to the Vehicle Industry!!!!" << endl;

	cout << "\nEnter the choice of Vehicle that you would want to purchase\nMenu:" << endl;
	cout << "1.Two Wheeler\n2.Three Wheeler\n3.Four Wheeler\n4.Quit" << endl;
	cout << "Enter your Choice:";
	cin >> choice;
	switch(choice)
	{
			case 1: pOwner = new Owner(VT_TwoWheeler);
					break;
			case 2: pOwner = new Owner(VT_ThreeWheeler);
					break;
			case 3: pOwner = new Owner(VT_FourWheeler);
					break;
			case 4: cout << "Quitting you out\n";
					pOwner=nullptr;
					break;
			default: cout << "Enter Valid Choice!!!" << endl;
					pOwner=nullptr;
					break;
	}

	if(pOwner!=nullptr)
	{
		Vehicle * pVehicle = pOwner->getVehicle();
		pVehicle->printVehicle();
		cout << "Enjoy your test drive while we finalize your purchase" << endl;
		sleep(10);
		cout << "Have a safe journey" << endl;
	}
    
	delete pOwner;
	return 0;
}
