#pragma once
#include "CCercle.h"
class CSphere :
	public CCercle
{
public:
	CSphere(double rayon, double x = 0, double y = 0) : CCercle(rayon, x, y) {};
	~CSphere() {};
	double volume() override;
	string description(t_desc type) override;
	string toString();
};

