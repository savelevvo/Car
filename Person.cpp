#include "Person.h"

Person::Person(const Person &_p)
{
	fname = _p.fname;
	lname = _p.lname;
	garage = _p.garage;
}

Person::Person(const string &_fn, const string &_ln, Garage &_g)
{
	fname = _fn;
	lname = _ln;
	garage = &_g;
}

Person & Person::operator=(const Person &_p)
{
	if (this == &_p) return *this;
	fname = _p.fname;
	lname = _p.lname;
	garage = _p.garage;
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Person &_p)
{
	return os << _p.fname << " " << _p.lname;
}

std::istream & operator>>(std::istream &is, Person &_p)
{
	cout << "Input first name: "; is >> _p.fname;
	cout << "Input last name: "; is >> _p.lname;
	return is;
}