#pragma once
#include<iostream>
using std::cout;

class Ratio
{
private:
	float first;
	unsigned short second;
public:
	Ratio();
	Ratio(const Ratio &);
	Ratio(float);
	Ratio(float, unsigned short);

	Ratio & operator=(const Ratio &);

	friend std::ostream & operator<<(std::ostream &, const Ratio &);
	friend std::istream & operator>>(std::istream &, Ratio &);
	friend bool operator==(const Ratio &, const Ratio &);
};