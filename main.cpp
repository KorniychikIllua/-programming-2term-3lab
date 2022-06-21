#include "include.h"


#include "VehiclePark.h"

int main()
{

	Car* car1 = new Car;
	
	car1->SetName("BMW X5");
	car1->SetColour("Black");
	car1->SetMass(3);
	car1->SetMotor("J-Z",5);
	car1->SetPower(560);
	car1->SetBodyType("SUV");
	car1->SetYear(2021);
	
	Motorbike* bike1 = new Motorbike;

	bike1->SetName("BMW M1000");
	bike1->SetColour("Red");
	bike1->SetMass(2.2);
	bike1->SetMotor("BMW k2", 0.2);
	bike1->SetPower(200);
	bike1->SetMotorBikeType("adventure");
	bike1->SetYear(2015);


	Bus* bus1 = new Bus;
	bus1->SetName("BMW party bus");
	bus1->SetColour("Midnight-blue");
	bus1->SetMass(5);
	bus1->SetMotor("BMW S2", 3);
	bus1->SetPower(200);
	bus1->SetPassengerCapacity(40);
	bus1->SetYear(2019);

	VehiclePark park1("BMW motors");
	park1.addVehicle(car1);
	park1.addVehicle(bike1);
	park1.addVehicle(bus1);
	park1.Show();
	system("pause");
}
