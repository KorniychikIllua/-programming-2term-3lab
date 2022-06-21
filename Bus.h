#include "include.h"



class Bus : public Vehicle
{
public:
	Bus();
	~Bus() override;
	
	Bus operator=(const Bus& bus);

	void SetPassengerCapacity(int passengersCount);
	int GetPassengerCapacity();

	void Show() override;

private:
	int _passengerCapacity;
};

