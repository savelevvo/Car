#pragma once
#include<iostream>
#include<string>
#include"Garage.h"

using std::string;
using std::cout;

class Person
{
public:
	Person();
	Person(const Person &);
	Person(const string &, const string &, Garage &);

	Person & operator=(const Person &);

	friend std::ostream & operator<<(std::ostream &, const Person &);
	friend std::istream & operator>>(std::istream &, Person &);
private:
	Garage *garage;
	string fname, lname;
	void init(string, string);
};