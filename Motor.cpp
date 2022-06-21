#include "include.h"


#include "motor.h"


// ����������� �� ������������� ��� ����� Motor
Motor::Motor()
{
	_name = "Unnamed";
	_capacity = 0.0;
}


// ����������� � ����������� ��� ����� Motor
Motor::Motor(string name, float capacity)
{
	_name = name;
	_capacity = capacity;
}


// ����� ����� Motor, ������� string � ������ �������
string Motor::GetName()
{
	return _name;
}


// ����� ����� Motor, ������� �������� ��'��� �������
float Motor::GetCapacity()
{
	return _capacity;
}


// ����� ����� Motor, �� ���������� ����� ������.
void Motor::SetName(string name)
{
	_name = name;
}


// ����� ����� Motor, �� ���������� ��'� ������.
void Motor::SetCapacity(float capacity)
{
	_capacity = capacity;
}


// ����� ����� Motor, �� �������� �� ����� �����-�� �������
void Motor::Show()
{
	cout << "Motor: " << _name << endl;
	cout << "Motor's capacity: " << _capacity << " (l)" << endl;
}



int Motor::operator==(const Motor& motor)
{
	if ((_name == motor._name) && (_capacity == motor._capacity)) return 1;
	return 0;
}


// ������������ ������� =
Motor Motor::operator=(const Motor& motor)
{
	if (this == &motor) return *this;

	_name = motor._name;
	_capacity = motor._capacity;
	return *this;
}


// Setter ����� Motor
void Motor::Set(string name, float capacity)
{
	SetName(name);
	SetCapacity(capacity);
}


// ���������� ��� ����� Motor
Motor::~Motor()
{
	
}