#include "include.h"

#include <vector>
#include "vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"



class VehiclePark
{
public:
	VehiclePark();
	VehiclePark(string name);
	int addVehicle(Vehicle* Vehicle);
	void Show();

private:
	vector<Vehicle*> _vehicleList;
	string _name;
	int _vehicleCount;
};

