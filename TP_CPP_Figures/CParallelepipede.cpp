#include "CParallelepipede.h"

double CParallelepipede::volume()
{
	return dbl_haut*dbl_long*dbl_larg;
}

string CParallelepipede::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Pave Droit";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|-Pave Droit\n"; strDesc += "{\n";
		strDesc += "\tx = "; oss << m_dblx; strDesc += oss.str() + "\n";
		strDesc += "\ty="; oss.str(""); oss << m _ d b ly; strDesc += oss.str() + "\n";
		strDesc += "\tz =  "; oss.str(""); oss << m_dblz; strDesc += oss.str() + "\n";
		strDesc += "\tvolume = "; oss.str(""); oss << volume(); strDesc += oss.str() + "\n"; strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CParallelepipede::toString()
{
	ostringstream oss;
	oss << volume();
	return CFigure::toString() + " " + oss.str();
}
