#include<string>
#include"Garage.h"
#include"Person.h"
using std::string;

int main()
{
	Engine m50b20("m50b20", 0, Ratio(10.5), 6, 82, 66, 2.0F, 150);
	Car E34_520("E34", "5", "Germany", "Manual", Acceleration(11,3), m50b20);	
	
	Engine m50b25("m50b25", 1, Ratio(10.5), 6, 84, 66, 2.5F, 192);
	Car E34_525("E34", "5", "Germany", "Manual", Acceleration(9, 4), m50b25);
	
	Garage g;
	g.AddCar(E34_520);
	g.AddCar(E34_525);
	g.DisplayCars();

	Person John("John", "Smith", g);
	cout << John << endl;
}

// add file i/o