#include"Engine.h"

void Engine::init(std::string _name = "N/A", bool _CVVT = false, 
					FENG_PARAM _displacement = 1, IENG_PARAM _cylinderCount = 1, 
					IENG_PARAM _cylinderDiameter = 1, IENG_PARAM _stroke = 1,
					IENG_PARAM _power = 1)
{
	name = _name;
	CVVT = _CVVT;
	displacement = _displacement;
	cylinderCount = _cylinderCount;
	cylinderDiameter = _cylinderDiameter;
	stroke = _stroke;
	power = _power;
}

Engine::Engine()
	:comprRatio(Ratio())
{
	init();
}

Engine::Engine(const Engine &rhs)
	:comprRatio(rhs.comprRatio)
{
	init(rhs.name, rhs.CVVT, rhs.displacement, 
		rhs.cylinderCount, rhs.cylinderDiameter, rhs.stroke, rhs.power);
}

Engine::Engine
(
	Ratio		 _comprRatio,
	std::string  _name,
	bool		 _CVVT,
	FENG_PARAM	 _displacement,
	IENG_PARAM	 _cylinderCount,
	IENG_PARAM	 _cylinderDiameter,
	IENG_PARAM	 _stroke,
	IENG_PARAM	 _power
)
	:comprRatio(_comprRatio)
{
	init(_name, _CVVT, _displacement, 
		_cylinderCount, _cylinderDiameter, _stroke, _power);
}

Engine & Engine::operator=(const Engine &rhs)
{
	if (this == &rhs) return *this;
	comprRatio = rhs.comprRatio;
	init(rhs.name, rhs.CVVT, rhs.displacement,
		rhs.cylinderCount, rhs.cylinderDiameter, rhs.stroke, rhs.power);
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Engine &_e)
{
	return os << "\nEngine info:" << endl
		<< "\tName: " << _e.name << endl
		<< "\tCVVT: " << (_e.CVVT ? "yes" : "no") << endl
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

bool operator==(const Engine &lhs, const Engine &rhs)
{
	return  lhs.name == rhs.name &&
			lhs.CVVT == rhs.CVVT &&
			lhs.comprRatio == rhs.comprRatio &&
			lhs.cylinderCount == rhs.cylinderCount &&
			lhs.cylinderDiameter == rhs.cylinderDiameter &&
			lhs.stroke == rhs.stroke &&
			lhs.displacement == rhs.displacement &&
			lhs.power == rhs.power;
}