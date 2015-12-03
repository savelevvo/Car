#pragma once
#include<iostream>
#include<string>
#include"Ratio.h"

using std::cout;
using std::endl;

typedef size_t IENG_PARAM;
typedef float  FENG_PARAM;
typedef std::string SCAR_PARAM;

class Engine
{
private:
	std::string name;
	bool CVVT;
	Ratio		comprRatio;			// степень сжатия
	FENG_PARAM  displacement;		// объем
	IENG_PARAM  cylinderCount,		// количество цилиндров
				cylinderDiameter,	// диаметр цилиндра
				stroke,				// ход поршня
				power;				// л.с.

public:
	Engine();
	Engine(const Engine &);
	Engine 
	(
		std::string	  _name,
		bool		  _CVVT,
		Ratio		  _comprRatio,
		IENG_PARAM    _cylinderCount,
		IENG_PARAM    _cylinderDiameter,
		IENG_PARAM    _stroke,
		FENG_PARAM    _displacement,
		IENG_PARAM    _power
	);

	Engine & operator=(const Engine &);

	friend std::ostream & operator<<(std::ostream &, const Engine &);
	friend std::istream & operator>>(std::istream &, Engine &);
	friend bool operator==(const Engine &, const Engine &);
};