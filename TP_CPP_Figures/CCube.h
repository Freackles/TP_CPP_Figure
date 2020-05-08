#pragma once
#include "CCarre.h"
class CCube :
	public CCarre
{
public:
	CCube(double cote, double x = 0, double y = 0) : CCarre(cote, x, y) {};
	~CCube() {};
	double volume() override;
	string description(t_desc type) override;
	string toString();
};

