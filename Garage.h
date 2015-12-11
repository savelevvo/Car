#pragma once
#include<vector>
#include "Car.h"

using std::vector;
using std::size_t;
using std::cout;
using std::endl;

class Garage
{
public:
	void AddCar(const Car &);
	void DisplayCars()const;
	void SetCurrentCar(Car &);
	void DisplayCurrentCar()const { cout << endl << "Current car:" << *CurrentCar << endl; };
private:
	vector<Car> CarList;
	size_t CarsCount = CarList.size();
	Car *CurrentCar;
};