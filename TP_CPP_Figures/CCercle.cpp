#include "CCercle.h"

CCercle::CCercle(double rayon, double x, double y)
{
	CFigure(x, y, 0);
	dbl_rayon = rayon;
}

CCercle::~CCercle()
{
}

double CCercle::perimetre()
{
	return 2*3.14*dbl_rayon;
}

double CCercle::aire()
{
	return (3.14*dbl_rayon)*(3.14*dbl_rayon);
}

string CCercle::description(t_desc type)
{
	string strDesc;

	switch (type)
	{
	default:
		strDesc = "";
		break;
		
	case 0:
		strDesc = "Cercle";
		break;
	case 1:
		strDesc = "Type de figure: Cercle\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty="; oss.str(""); oss << m_dbly; strDesc += oss.str() + "\n";
		strDesc += "\tz =  "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tRayon = "; oss.str(""); oss << dbl_rayon; strDesc += oss.str() + "\n"; strDesc += "}\n";

	}
	return strDesc;
}

string CCercle::toString()
{
	ostringstream oss; 
	oss << dbl_rayon; 
	return Figure::toString() + " " + oss.str();
}
