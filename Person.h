#pragma once
#include<iostream>
#include<string>
#include"Garage.h"
using std::string;
using std::cout;

class Person
{
private:
	string fname, lname;
	Garage *garage;
	
public:
	Person() : fname("Unknown"), lname("Unknown"), garage(nullptr) {}
	Person(const Person &);
	Person(const string &, const string &, Garage &);

	Person & operator=(const Person &);

	friend std::ostream & operator<<(std::ostream &, const Person &);
	friend std::istream & operator>>(std::istream &, Person &);

};