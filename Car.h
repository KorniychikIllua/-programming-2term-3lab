#pragma once

#include "include.h"


class Car : public Vehicle   
{
public:
	Car();
	~Car();

	Car operator=(const Car& car);

	void SetBodyType(string bodyType);
	string GetBodyType();

	void Show() override;
private:
	string _bodyType;
};

