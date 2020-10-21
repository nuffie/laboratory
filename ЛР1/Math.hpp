#pragma once
#include "stdafx.hpp"
#include "CPoint.hpp"

// param 1 - Point A
// param 2 - Point B
double LenghtSegment(const CPoint& A, const CPoint& B)
{
	return sqrt(pow(A.GetX() - B.GetX(), 2) + pow(A.GetY() - B.GetY(), 2));
}

// param 1 - segment A
// param 2 - segment B
// param 3 - segment C
// param 4 - half perimeter
double TriangleP(const double a, const double b, const double c, const bool half)
{
	switch (half){
	case true:
	{
		return (a + b + c) / 2;
	}break;

	default:
	{
		return (a + b + c);
	}break;
	}

	return (a + b + c);
}

// param 1 - segment A
// param 2 - segment B
// param 3 - segment C
double Geron(const double a, const double b, const double c)
{
	double pp = TriangleP(a, b, c, true);
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}