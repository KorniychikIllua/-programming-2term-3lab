#include "include.h"

#include "vehicle.h"
#include "Motorbike.h"


Motorbike::Motorbike()
{
	_bikeType = "unnamed";
}


void Motorbike::SetMotorBikeType(string bodyType)
{
	_bikeType = bodyType;
}


string Motorbike::GetMotorbikeType()
{
	return _bikeType;
}


void Motorbike::Show()
{
	Vehicle::Show();
	cout << "Bike type: " << _bikeType << endl << endl;
}


Motorbike Motorbike::operator=(const Motorbike& motorbike)
{
	Vehicle::operator=(motorbike);
	SetMotorBikeType(motorbike._bikeType);
	return *this;
}


Motorbike::~Motorbike()
{

}
