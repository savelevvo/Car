#pragma once
#include<iostream>
using std::cout;

class Ratio
{
public:
	Ratio();
	Ratio(const Ratio &);
	Ratio(float);
	Ratio(float, unsigned short);

	Ratio & operator=(Ratio);

	friend std::ostream & operator<<(std::ostream &, const Ratio &);
	friend std::istream & operator>>(std::istream &, Ratio &);
	friend bool operator==(const Ratio &, const Ratio &);
private:
	float first;
	unsigned short second;
	void init(float, unsigned short);
	void swap(Ratio &);
};