#pragma once
#include<iostream>
#include<string>
#include"Ratio.h"

typedef size_t IENG_PARAM;
typedef float  FENG_PARAM;
typedef std::string SCAR_PARAM;
typedef float FCAR_PARAM;

class Engine
{
private:
	std::string name;
	bool CVVT;
	Ratio		comprRatio;			// ������� ������
	FENG_PARAM  displacement;		// �����
	IENG_PARAM  cylinderCount,		// ���������� ���������
				cylinderDiameter,	// ������� ��������
				stroke,				// ��� ������
				power;				// �.�.

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

	friend std::ostream & operator<<(std::ostream &, const Engine &);
	friend std::istream & operator>>(std::istream &, Engine &);

};