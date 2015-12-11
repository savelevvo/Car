#pragma once
#include<iostream>
#include"Engine.h"
#include"Acceleration.h"

using std::cout;
using std::endl;

class Car :
	private Engine
{
public:
	Car();
	Car(const Car &);
	Car(
		Engine		 _engine,
		Acceleration _acceleration,
		SCAR_PARAM   _model,
		SCAR_PARAM   _series,
		SCAR_PARAM   _country,
		SCAR_PARAM   _transmission
		);

	Car & operator=(const Car &);

	friend std::ostream & operator<<(std::ostream &, const Car &);
	friend std::istream & operator>>(std::istream &, Car &);
	friend bool operator==(const Car &, const Car &);
private:
	Engine		 engine;
	Acceleration acceleration;
	SCAR_PARAM   model,
		series,
		country,
		transmission;
	void init(SCAR_PARAM, SCAR_PARAM, SCAR_PARAM, SCAR_PARAM);
};