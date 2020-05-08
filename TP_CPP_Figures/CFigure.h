#pragma once
//using namespace std;
typedef enum { courte, longue } t_desc;

class CFigure
{
protected:
	double m_dblx, m_dbly, m_dblz;

public:
	CFigure(double x = 0, double y = 0, double z = 0);
	virtual ~CFigure();
	virtual double perimetre() { return 0 };
	virtual double aire() { return 0 };
	virtual double volume() { return 0 };
	virtual string description(t_desc type) { return "Figure" };
	virtual string toString();

};

