#include "include.h"



class Motorbike : public Vehicle
{
public:
	Motorbike();
	~Motorbike();

	Motorbike operator=(const Motorbike& car);

	void SetMotorBikeType(string bodyType);
	string GetMotorbikeType();

	void Show() override;
private:
	string _bikeType;
};

