#include "Acceleration.h"

Acceleration::Acceleration(const Acceleration &_acc)
{
		sec = _acc.sec;
		msec = _acc.msec;
}

Acceleration::Acceleration(TIME _msec)
{
	if (_msec < 60)
		msec = _msec;
	else
	{
		sec = _msec / 60;
		msec = _msec - sec * 60;
	}
}

Acceleration::Acceleration(TIME _sec, TIME _msec)
{
	if (_msec < 60)
	{
		msec = _msec;
		sec = _sec;
	}
	else
	{
		sec = _msec / 60;
		msec = _msec - sec * 60;
		sec += _sec;
	}
}

Acceleration & Acceleration::operator=(const Acceleration &_acc)
{
	if (this == &_acc) return *this;
	sec = _acc.sec;
	msec = _acc.msec;
	return *this;
}

bool operator==(const Acceleration &lhs, const Acceleration &rhs)
{
	return lhs.sec == rhs.sec && lhs.msec == rhs.msec;
}

bool Acceleration::operator!=(const Acceleration &_acc)
{
	return !(*this == _acc);
}

bool Acceleration::operator<(const Acceleration &_acc)
{
	return (sec * 60 + msec) < (_acc.sec * 60 + _acc.msec);
}

bool Acceleration::operator<=(const Acceleration &_acc)
{
	return (sec * 60 + msec) <= (_acc.sec * 60 + _acc.msec);
}

bool Acceleration::operator>(const Acceleration &_acc)
{
	return !(*this < _acc);
}

bool Acceleration::operator>=(const Acceleration &_acc)
{
	return (sec * 60 + msec) >= (_acc.sec * 60 + _acc.msec);
}

std::ostream & operator<<(std::ostream &os, const Acceleration &_acc)
{
	return os << _acc.sec << "," << _acc.msec << "s";
}

std::istream & operator>>(std::istream &is, Acceleration &_acc)
{
	cout << "Input Seconds: "; is >> _acc.sec;
	cout << "Input Mseconds: "; is >> _acc.msec;
	return is;
}