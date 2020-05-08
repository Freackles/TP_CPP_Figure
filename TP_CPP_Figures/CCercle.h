#pragma once
#include "CFigure.h"


class CCercle :
	public CFigure
{
protected:
	double dbl_rayon;

public:
	CCercle(double rayon, double x = 0, double y = 0);
	~CCercle();
	double perimetre() override;
	double aire() override;
	string description(t_desc type) override;
	string toString();
};

