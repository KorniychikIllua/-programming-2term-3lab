#include "include.h"

#include "vehicle.h"
#include "Bus.h"



Bus::Bus()
{
	_passengerCapacity = 0;
}


Bus::~Bus()
{

}


void Bus::SetPassengerCapacity(int passengersCount)
{
	_passengerCapacity = passengersCount;
}


int Bus::GetPassengerCapacity()
{
	return _passengerCapacity;
}


Bus Bus::operator=(const Bus& bus)
{
	Vehicle::operator=(bus);
	SetPassengerCapacity(bus._passengerCapacity);
	return *this;
}


void Bus::Show() 
{
	Vehicle::Show();
	cout << "Passenger capacity: " << _passengerCapacity << endl << endl;
}
