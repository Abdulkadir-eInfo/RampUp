#ifndef VEHICLE_H
#define VEHICLE_H


enum VehicleType {
	VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
};

class Vehicle
{
	public:
    virtual void printVehicle() = 0;
	static Vehicle* Create(VehicleType type);
	virtual ~Vehicle(){}
};

#endif