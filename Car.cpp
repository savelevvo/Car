#include"Car.h"
using std::cout;
using std::endl;

Car::Car()
{
	model = "Unnamed";
	series = "Unknown Series";
	country = "N/A";
	transmission = "Manual";
	acceleration = .0;
}

Car::Car(const Car &_c)
{
	model = _c.model;
	series = _c.series;
	country = _c.country;
	transmission = _c.transmission;
	acceleration = _c.acceleration;
	engine = _c.engine;
}

Car::Car
(
	SCAR_PARAM  _model,
	SCAR_PARAM  _series,
	SCAR_PARAM  _country,
	SCAR_PARAM  _transmission,
	FCAR_PARAM  _acceleration,
	Engine		_engine
)
{
	model = _model;
	series = _series;
	country = _country;
	transmission = _transmission;
	acceleration = _acceleration;
	engine = _engine;
}

std::ostream & operator<<(std::ostream &os, const Car &_c)
{
	return os << "\nCar's info:"
		<< "\n\tModel: " << _c.model << endl
		<< "\tSeries: " << _c.series << endl
		<< "\tCountry: " << _c.country << endl
		<< "\tTransmission: " << _c.transmission << endl
		<< "\tAcceleration 0-100 km/h: " << _c.acceleration << endl
		<< _c.engine;
}

std::istream & operator>>(std::istream &is, Car &_c)
{
	cout << "Input Car's features"
		<< "\n\tModel: ";
	is >> _c.model;

	cout << "\tSeries: ";
	is >> _c.series;

	cout << "\tCountry: ";
	is >> _c.country;

	cout << "\tTransmission: ";
	is >> _c.transmission;

	cout << "\tAcceleration: ";
	is >> _c.acceleration;

	is >> _c.engine;

	return is;
}