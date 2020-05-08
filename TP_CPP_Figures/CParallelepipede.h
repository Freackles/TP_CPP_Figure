#pragma once
#include "CRectange.h"
class CParallelepipede :
	public CRectange
{
private:
	double dbl_haut;
public:
	CParallelepipede(double haut, double larg, double longu, double x = 0, double y = 0, double z = 0) : CRectange(larg, longu, x, y), dbl_haut(haut) {};
	~CParallelepipede() {};
	double volume() override;
	string description(t_desc type) override;
	string toString();
};

