#include"Ratio.h"

Ratio::Ratio()
	:first(1),
	 second(1)
{}

Ratio::Ratio(const Ratio &rhs)
	:first(rhs.first),
	 second(rhs.second)
{}

Ratio::Ratio(float _f)
	:first(_f),
	 second(1)
{}

Ratio::Ratio(float _f, unsigned short _s)

	:first(_f),
	 second(_s)
{}

Ratio & Ratio::operator=(const Ratio &rhs)
{
	if (this == &rhs) return *this;
	first = rhs.first;
	second = rhs.second;
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Ratio &_r)
{
	return os << _r.first << ":" << _r.second;
}


std::istream & operator>>(std::istream &is, Ratio &_r)
{
	cout << "\tInput first part of ratio: ";
	is >> _r.first;
	cout << "\tInput second part of ratio: ";
	is >> _r.second;
	return is;
}

bool operator==(const Ratio &lhs, const Ratio &rhs)
{
	return lhs.first == rhs.first && lhs.second == rhs.second;
}