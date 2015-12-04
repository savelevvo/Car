#include "Person.h"

void Person::init(string _fname = "Unknown", string _lname = "Unknown")
{
	fname = _fname;
	lname = _lname;
}

Person::Person()
	: garage(nullptr)
{
	init();
}

Person::Person(const Person &rhs)
	:garage(rhs.garage)
{
	init(rhs.fname, rhs.lname);
}

Person::Person(const string &_fn, const string &_ln, Garage &_g)
	:garage(&_g)
{
	init(_fn, _ln);
}

Person & Person::operator=(const Person &rhs)
{
	if (this == &rhs) return *this;
	garage = rhs.garage;
	init(rhs.fname, rhs.lname);
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