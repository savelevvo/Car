#pragma once
#include<iostream>
using std::cout;
typedef unsigned int TIME;

class Acceleration
{
public:
	Acceleration();
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
private:
	TIME sec;
	TIME msec;
	void init(TIME, TIME);
};