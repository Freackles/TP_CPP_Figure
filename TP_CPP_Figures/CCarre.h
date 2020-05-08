#pragma once
#include "CFigure.h"
//using namespace std;

class CCarre :
	public CFigure
{
protected:
	double m_dbllargeur;

public:
	CCarre(double largeur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur) {};
	~CCarre() {};
	double perimetre() { return m_dbllargeur * 4; };
	double aire() { return m_dbllargeur * m_dbllargeur; };
	string description(t_desc type); 
	string toString();
};

