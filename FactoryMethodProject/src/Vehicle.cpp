#include <iostream>
#include "Vehicle.h"
using namespace std;

class TwoWheeler : public Vehicle {
public:
	void printVehicle() {
		cout << "Here is your two wheeler" << endl;
	}
};
class ThreeWheeler : public Vehicle {
public:
	void printVehicle() {
		cout << "Here is your three wheeler" << endl;
	}
};
class FourWheeler : public Vehicle {
	public:
	void printVehicle() {
		cout << "Here is your four wheeler" << endl;
	}
};


// Factory method to create objects of different types.
// Change is required only in this function to create a new object type
Vehicle* Vehicle::Create(VehicleType type) {
	if (type == VT_TwoWheeler)
		return new TwoWheeler();
	else if (type == VT_ThreeWheeler)
		return new ThreeWheeler();
	else if (type == VT_FourWheeler)
		return new FourWheeler();
	else return NULL;
}