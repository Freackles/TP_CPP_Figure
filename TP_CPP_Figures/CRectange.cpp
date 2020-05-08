#include "CRectange.h"

string CRectange::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Rectangle";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|-Rectangle\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty="; oss.str(""); oss << m _ d b ly; strDesc += oss.str() + "\n";
		strDesc += "\tz =  "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tlargeur = "; oss.str(""); oss << dbl_larg; strDesc += oss.str() + "\n"; strDesc += "}\n";
		strDesc += "\tlongueur = "; oss.str(""); oss << dbl_long; strDesc += oss.str() + "\n"; strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CRectange::toString()
{
	ostringstream oss, oss2;
	oss << dbl_larg;
	oss2 << dbl_long;
	return CFigure::toString() + " " + oss.str() + " " + oss2;
}
