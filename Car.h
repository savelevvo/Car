#pragma once
#include<iostream>
#include"Engine.h"
#include"Acceleration.h"

class Car :
	private Engine
{
private:
	SCAR_PARAM   model,
				 series,
				 country,
				 transmission;
	Acceleration acceleration;
	Engine		 engine;
	
public:
	Car();
	Car(const Car &);
	Car(
		SCAR_PARAM   _model,
		SCAR_PARAM   _series,
		SCAR_PARAM   _country,
		SCAR_PARAM   _transmission,
		Acceleration _acceleration,
		Engine		 _engine
		);

	Car & operator=(const Car &);

	friend std::ostream & operator<<(std::ostream &, const Car &);
	friend std::istream & operator>>(std::istream &, Car &);
	friend bool operator==(const Car &, const Car &);
};