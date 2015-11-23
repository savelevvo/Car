#include"Engine.h"
using std::cout;
using std::endl;

Engine::Engine()
{
	name = "N/A";
	CVVT = false;
	cylinderCount = 1;
	cylinderDiameter = 1;
	stroke = 1;
	displacement = 1;
	power = 1;
}

Engine::Engine(const Engine &_e)
{
	name = _e.name;
	CVVT = _e.CVVT;
	comprRatio = _e.comprRatio;
	cylinderCount = _e.cylinderCount;
	cylinderDiameter = _e.cylinderDiameter;
	stroke = _e.stroke;
	displacement = _e.displacement;
	power = _e.power;
}

Engine::Engine
(
	std::string  _name,
	bool		 _CVVT,
	Ratio		 _comprRatio,
	IENG_PARAM	 _cylinderCount,
	IENG_PARAM	 _cylinderDiameter,
	IENG_PARAM	 _stroke,
	FENG_PARAM	 _displacement,
	IENG_PARAM	 _power
)
{
	name = _name;
	CVVT = _CVVT;
	comprRatio = _comprRatio;
	cylinderCount =	_cylinderCount;
	cylinderDiameter = _cylinderDiameter;
	stroke=_stroke;
	displacement=_displacement;
	power=_power;
}

std::ostream & operator<<(std::ostream &os, const Engine &_e)
{
	return os << "\nEngine info:" << endl
		<< "\tName: " << _e.name << endl
		<< "\tCVVT: " << _e.CVVT << endl
		<< "\tCompression: " << _e.comprRatio << endl
		<< "\tCylinders count: " << _e.cylinderCount << endl
		<< "\tCylinders diameter: " << _e.cylinderDiameter << endl
		<< "\tStroke: " << _e.stroke << endl
		<< "\tDisplacement: " << _e.displacement << endl
		<< "\tPower: " << _e.power << endl;
}

std::istream & operator>>(std::istream &is, Engine &_e)
{
	cout << "\nInput Engine's features"
		 << "\n\tName: ";
	is >> _e.name;
	
	cout << "\tCVVT (1/0): ";
	is >> _e.CVVT;

	is >> _e.comprRatio;

	cout << "\tCylinders count: ";
	is >> _e.cylinderCount;

	cout << "\tCylinders diameter: ";
	is >> _e.cylinderDiameter;

	cout << "\tStroke: ";
	is >> _e.stroke;

	cout << "\tDisplacement: ";
	is >> _e.displacement;

	cout << "\tPower: ";
	is >> _e.power;

	return is;
}