#include "include.h"

#include "motor.h"


// Віртаульний клас vehicle
class Vehicle
{
public:
	Vehicle();
	virtual ~Vehicle();
	

	void SetName(string name);
	void SetColour(string colour);
	void SetMass(float mass);
	void SetPower(int power);
	void SetYear(int year);
	void SetMotor(string name, float capacity);
	void SetMotor(const Motor& motor);

	Vehicle operator=(const Vehicle& vehicle);

	string GetName();
	string GetColour();
	float GetMass();
	int GetPower();
	int GetYear();
	Motor GetMotor();
	void GetMotor(Motor* motor);

	virtual void Show();
private:
	
protected:
	float	_mass;
	string	_name;
	string	_colour;
	int		_power;
	int		_year;
	Motor	_motor;
};

