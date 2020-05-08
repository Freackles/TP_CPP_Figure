#include "CFigure.h"

CFigure::CFigure(double x, double y, double z)
{
	m_dblx = x;
	m_dbly = y;
	m_dblz = z;
}

CFigure::~CFigure()
{
}

string CFigure::toString()
{
	ostringstream oss;
	oss << m_dblx << " " << m_dbly << " " << m_dblz;
	return oss.str();
}
