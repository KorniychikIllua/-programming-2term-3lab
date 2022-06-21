#include "include.h"


#include "vehicle.h"

// Конструктор без параметрів
Vehicle::Vehicle(){
	_name = "Unnamed";
	_colour = "No colour";
	_mass = 0;

	Motor _motor;
	_power = 0;
	_year = 0;
}

void Vehicle::SetName(string name)
{
	_name = name;
}


void Vehicle::SetColour(string colour)
{
	_colour = colour;
}


void Vehicle::SetMass(float mass)
{
	_mass = mass;
}


void Vehicle::SetPower(int power)
{
	_power = power;
}


void Vehicle::SetYear(int year)
{
	_year = year;
}


void Vehicle::SetMotor(string name, float capacity)
{
	_motor.Set(name, capacity);
}


void Vehicle::SetMotor(const Motor& motor)
{
	_motor = motor;
}


string Vehicle::GetName()
{
	return _name;
}


string Vehicle::GetColour()
{
	return _colour;
}


float Vehicle::GetMass()
{
	return _mass;
}


int Vehicle::GetPower()
{
	return _power;
}


int Vehicle::GetYear()
{
	return _year;
}


Motor Vehicle::GetMotor()
{
	return _motor;
}


void Vehicle::GetMotor(Motor* motor)
{
	Motor res;
	res = _motor;
	motor = &res;
}


void Vehicle::Show()
{
	cout << "Name of vehicle: " << _name << endl;
	cout << "Production year: " << _year << endl;
	cout << "Colour: " << _colour << endl;
	cout << "Mass: " << _mass << "(t)" << endl;
	_motor.Show();
	cout << "Power: " << _power << " hp" << endl;
}


Vehicle Vehicle::operator=(const Vehicle& vehicle)
{
	SetName(vehicle._name);
	SetColour(vehicle._colour);
	SetMass(vehicle._mass);
	SetPower(vehicle._power);
	SetYear(vehicle._year);
	SetMotor(vehicle._motor);
	return *this;
}


Vehicle::~Vehicle()
{

}