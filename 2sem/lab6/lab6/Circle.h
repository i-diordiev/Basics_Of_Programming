#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	float _radius;
public:
	Circle(float r);
	double GetSquare() override;
	double GetPerimeter() override;
};

