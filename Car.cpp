#include "include.h"

#include "vehicle.h"
#include "Car.h"


Car::Car()
{
	_bodyType = "unknown";
}



void Car::SetBodyType(string bodyType)
{
	_bodyType = bodyType;
}



string Car::GetBodyType()
{
	return _bodyType;
}



Car Car::operator=(const Car& car)
{
	Vehicle::operator=(car);
	SetBodyType(car._bodyType);
	return *this;
}



void Car::Show()
{
	Vehicle::Show();
	cout << "Body type: " << _bodyType << endl << endl;
}



Car::~Car() 
{

}