#include "CCube.h"

double CCube::volume()
{
	return m_dbllargeur*m_dbllargeur*m_dbllargeur;
}

string CCube::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Cube";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|-Cube\n"; strDesc += "{\n";
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

string CCube::toString()
{
	ostringstream oss;
	oss << volume();
	return CFigure::toString() + " " + oss.str();
}
