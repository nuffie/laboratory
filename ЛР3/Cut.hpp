#pragma once
#include "stdafx.hpp"

//template<class Type> 
class CCut
{
public:
	/*Type*/ 
	double X, Y;
public:
	CCut();
	CCut(double, double);
	~CCut();

	/*Type*/ 
	double GetX() const;
	/*Type*/ 
	double GetY() const;

	void SetX(const /*Type*/ double);
	void SetY(const /*Type*/ double);

	void AddX(const double);
	void AddY(const double);
};

//template <class Type> 
CCut::CCut()
{
	X = Y = 0;
};

CCut::CCut(double _x, double _y)
{
	X = _x;
	Y = _y;
}

//template <class Type> 
CCut::~CCut(void)
{
}

//template <class Type> 
double CCut::GetX() const
{
	return X;
}

//template <class Type>
double CCut::GetY() const
{
	return Y;
};

//template <class Type>
void CCut::SetX(const double val)
{
	X = val;
}

//template <class Type>
void CCut::SetY(const double val)
{
	Y = val;
}

void CCut::AddX(const double val)
{
	X += val;
}

void CCut::AddY(const double val)
{
	Y += val;
}