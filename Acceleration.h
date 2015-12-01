#pragma once
#include<iostream>
using std::cout;
typedef unsigned int TIME;

class Acceleration
{
private:
	TIME sec;
	TIME msec;
public:
	Acceleration() : sec(0), msec(0) {};
	Acceleration(const Acceleration &);
	Acceleration(TIME);
	Acceleration(TIME, TIME);
	
	Acceleration & operator=(const Acceleration &);
	bool operator!=(const Acceleration &);
		
	bool operator<(const Acceleration &);
	bool operator<=(const Acceleration &);
	bool operator>(const Acceleration &);
	bool operator>=(const Acceleration &);

	friend bool operator==(const Acceleration &, const Acceleration &);
	friend std::ostream & operator<<(std::ostream &, const Acceleration &);
	friend std::istream & operator>>(std::istream &, Acceleration &);
	
};
