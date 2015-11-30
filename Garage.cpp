#include "Garage.h"

void Garage::AddCar(const Car &_c)
{
	CarList.push_back(_c);
	CarsCount++;
}

void Garage::DisplayCars()const
{
	for (size_t i = 0; i < CarsCount; i++)
		cout << CarList[i];
	cout << "\nTotal cars in garage: " << CarsCount << endl;
}

void Garage::SetCurrentCar(Car &_c)
{
	CurrentCar = &_c;
}