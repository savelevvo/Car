#include"Ratio.h"
using std::cout;

Ratio::Ratio(const Ratio &_r)
{
	first = _r.first;
	second = _r.second;
}

Ratio::Ratio(float _f)
{
	first = static_cast<float>(_f);
	second = 1;
}

Ratio::Ratio(float _f, unsigned short _s)
{
	first = static_cast<float>(_f);
	second = _s;
}

Ratio & Ratio::operator=(const Ratio &rhs)
{
	if (this == &rhs)
		return *this;
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