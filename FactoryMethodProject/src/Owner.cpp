#include <iostream>
#include "Owner.h"
using namespace std;


Owner::Owner(VehicleType t1)
{
    VehicleType type = t1;
	pVehicle = Vehicle::Create(type);
}

Owner::~Owner()
{
    if (pVehicle) 
    {
		delete pVehicle;
		pVehicle = NULL;
	}
}

Vehicle* Owner::getVehicle()
{
    return pVehicle;
}