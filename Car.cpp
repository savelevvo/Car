#include"Car.h"

void Car::init(SCAR_PARAM _model = "Unnamed", SCAR_PARAM _series = "Unknown Series",
				SCAR_PARAM _country = "N/A", SCAR_PARAM _transmission = "Manual")
{
	model = _model;
	series = _series;
	country = _country;
	transmission = _transmission;
}

Car::Car()
	:engine(Engine()),
	 acceleration(Acceleration())
{
	init();
}

Car::Car(const Car &rhs)
	:engine(rhs.engine),
	 acceleration(rhs.acceleration)
{
	init(rhs.model, rhs.series, rhs.country, rhs.transmission);
}

Car::Car
(
	Engine		 _engine,
	Acceleration _acceleration,
	SCAR_PARAM   _model,
	SCAR_PARAM   _series,
	SCAR_PARAM   _country,
	SCAR_PARAM   _transmission
)
	:engine(_engine),
	acceleration(_acceleration)
{
	init(_model, _series, _country, _transmission);
}

Car & Car::operator=(const Car &rhs)
{
	if (this == &rhs) return *this;
	engine = rhs.engine;
	acceleration = rhs.acceleration;
	init(rhs.model, rhs.series, rhs.country, rhs.transmission);
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Car &_c)
{
	return os << "\nCar's info:"
		<< "\n\tModel: " << _c.model << endl
		<< "\tSeries: " << _c.series << endl
		<< "\tCountry: " << _c.country << endl
		<< "\tTransmission: " << _c.transmission << endl
		<< "\tAcceleration 0-100 km/h: " << _c.acceleration << endl
		<< _c.engine
		<< "-------------------------------------";
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

bool operator==(const Car &lhs, const Car &rhs)
{
	return  lhs.model == rhs.model &&
			lhs.series == rhs.series &&
			lhs.country == rhs.country &&
			lhs.transmission == rhs.transmission &&
			lhs.acceleration == rhs.acceleration &&
			lhs.engine == rhs.engine;
}