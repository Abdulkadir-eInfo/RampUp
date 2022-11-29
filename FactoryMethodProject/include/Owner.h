#include "Vehicle.h"
#ifndef OWNER_H
#define OWNER_H

class Owner
{
	public:
	Owner(enum VehicleType);
	~Owner();
	Vehicle* getVehicle();

	private:
	Vehicle *pVehicle;

};

#endif