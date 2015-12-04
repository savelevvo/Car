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
	Ratio		comprRatio;			// ������� ������
	std::string name;				// ��������
	bool CVVT;						// ������� ��������� ��� �����������������
	FENG_PARAM  displacement;		// �����
	IENG_PARAM  cylinderCount,		// ���������� ���������
				cylinderDiameter,	// ������� ��������
				stroke,				// ��� ������
				power;				// �.�.
	void init(std::string, bool, FENG_PARAM, IENG_PARAM, 
				IENG_PARAM, IENG_PARAM, IENG_PARAM);
public:
	Engine();
	Engine(const Engine &);
	Engine 
	(
		Ratio		  _comprRatio,
		std::string	  _name,
		bool		  _CVVT,
		FENG_PARAM    _displacement,
		IENG_PARAM    _cylinderCount,
		IENG_PARAM    _cylinderDiameter,
		IENG_PARAM    _stroke,
		IENG_PARAM    _power
	);

	Engine & operator=(const Engine &);

	friend std::ostream & operator<<(std::ostream &, const Engine &);
	friend std::istream & operator>>(std::istream &, Engine &);
	friend bool operator==(const Engine &, const Engine &);
};