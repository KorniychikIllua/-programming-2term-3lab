#include "include.h"


#include "motor.h"


// Конструктор за замовчуванням для класу Motor
Motor::Motor()
{
	_name = "Unnamed";
	_capacity = 0.0;
}


// Конструктор з параметрами для класу Motor
Motor::Motor(string name, float capacity)
{
	_name = name;
	_capacity = capacity;
}


// Метод класу Motor, повертає string з назвою двигуна
string Motor::GetName()
{
	return _name;
}


// Метод класу Motor, повертає значення об'єму двигуна
float Motor::GetCapacity()
{
	return _capacity;
}


// Метод класу Motor, що встановлює назву мотору.
void Motor::SetName(string name)
{
	_name = name;
}


// Метод класу Motor, що встановлює обє'м мотору.
void Motor::SetCapacity(float capacity)
{
	_capacity = capacity;
}


// Метод класу Motor, що виводить на екран харак-ки двигуна
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


// Перегружений опертор =
Motor Motor::operator=(const Motor& motor)
{
	if (this == &motor) return *this;

	_name = motor._name;
	_capacity = motor._capacity;
	return *this;
}


// Setter класу Motor
void Motor::Set(string name, float capacity)
{
	SetName(name);
	SetCapacity(capacity);
}


// Деструктор для класу Motor
Motor::~Motor()
{
	
}