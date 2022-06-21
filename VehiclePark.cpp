#include "include.h"

#include "VehiclePark.h"

VehiclePark::VehiclePark()
{
	_vehicleCount = 0;
	_name = "Unnamed";
}

VehiclePark::VehiclePark(string name)
{
	_vehicleCount = 0;
	_name = name;
}


int VehiclePark::addVehicle(Vehicle* vehicle)
{
	_vehicleList.push_back(vehicle);
	_vehicleCount++;
	return 1;
}


void VehiclePark::Show()
{
	for (int i = 0; i < _vehicleCount; i++)
	{
		_vehicleList[i]->Show();
	}
}