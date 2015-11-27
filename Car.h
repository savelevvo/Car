#pragma once
#include<iostream>
#include"Engine.h"

class Car :
	private Engine
{
private:
	SCAR_PARAM  model,
				series,
				country,
				transmission;
	FCAR_PARAM	acceleration;
	Engine		engine;
	
public:
	Car();
	Car(const Car &);
	Car(
		SCAR_PARAM  _model,
		SCAR_PARAM  _series,
		SCAR_PARAM  _country,
		SCAR_PARAM  _transmission,
		FCAR_PARAM  _acceleration,
		Engine		_engine
		);

	Car & operator=(const Car &);

	friend std::ostream & operator<<(std::ostream &, const Car &);
	friend std::istream & operator>>(std::istream &, Car &);
	friend bool operator==(const Car &, const Car &);
};