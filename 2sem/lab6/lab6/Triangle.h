#pragma once
#include "Figure.h"
class Triangle : public Figure
{
private:
	float** _points;
public:
	Triangle(float** points);
	double GetSquare() override;
	double GetPerimeter() override;
};

