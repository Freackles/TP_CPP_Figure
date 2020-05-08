#pragma once
#include "CFigure.h"
class CRectange :
	public CFigure
{
protected:
	double dbl_long, dbl_larg;

public:
	CRectange(double largeur, double longueur, double x = 0, double y = 0) : CFigure(x, y, 0),dbl_larg(largeur),dbl_long(longueur) {};
	~CRectange() {};
	double perimetre() { return 2*(dbl_long+dbl_larg); };
	double aire() { return dbl_larg * dbl_long; };
	string description(t_desc type);
	string toString();
};

