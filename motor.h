#include "include.h"


class Motor
{
public:
	Motor();
	Motor(string name, float capacity);
	~Motor();
	
	string GetName();
	float GetCapacity();

	Motor operator=(const Motor& motor);
	int operator==(const Motor& motor);

	void Set(string name, float capacity);

	void SetName(string name);
	void SetCapacity(float capacity);

	void Show();

private:
	string _name;
	float _capacity;
};

