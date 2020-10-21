#include "CPoint.hpp"

CPoint::CPoint()
{
	X = Y = 0.f;
}

CPoint::CPoint(double _X, double _Y)
{
	X = _X;
	Y = _Y;
}

CPoint::CPoint(CPoint* ptr)
{
	X = ptr->GetX();
	Y = ptr->GetY();
}

CPoint::~CPoint() { }

double CPoint::GetX() const
{
	return X;
}

double CPoint::GetY() const
{
	return Y;
}

void CPoint::SetX(const double val)
{
	X = val;
}

void CPoint::SetY(const double val)
{
	Y = val;
}