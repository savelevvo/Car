#include "Person.h"

Person::Person()
	:fname("Unknown"),
	 lname("Unknown"),
	 garage(nullptr)
{}

Person::Person(const Person &rhs)
	:fname(rhs.fname),
	 lname(rhs.lname),
	 garage(rhs.garage)
{}

Person::Person(const string &_fn, const string &_ln, Garage &_g)
	:fname(_fn),
	 lname(_ln),
	 garage(&_g)
{}

Person & Person::operator=(const Person &rhs)
{
	if (this == &rhs) return *this;
	fname = rhs.fname;
	lname = rhs.lname;
	garage = rhs.garage;
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