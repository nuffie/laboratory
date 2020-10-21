#pragma once
#include "stdafx.hpp"

class CPoint{
	protected:
		double X, Y;

	public:
		CPoint();
		CPoint(double, double);
		CPoint(CPoint*);
		~CPoint();

		void SetX(const double);
		void SetY(const double);
		
		double GetX() const;
		double GetY() const;
};