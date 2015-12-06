#include<string>
#include"Garage.h"
#include"Person.h"
using std::string;

int main()
{
	Engine m50b20(Ratio(10.5), "m50b20", 0, 2.0F, 6, 82, 66, 150);
	Car E34_520(m50b20, Acceleration(11, 3), "E34", "5", "Germany", "Manual");
	
	Engine m50b25(Ratio(10.5), "m50b25", 1, 2.5F, 6, 84, 66, 192);
	Car E34_525(m50b25, Acceleration(9, 4), "E34", "5", "Germany", "Manual");
	
	Garage g;
	g.AddCar(E34_520);
	g.AddCar(E34_525);
	g.DisplayCars();

	Person John("John", "Smith", g);
	cout << John << endl;
}
// add file i/o
//test