#include "Circle.h"

Circle::Circle(float r) {
	_radius = r;
}

double Circle::GetSquare() {
	return 3.1415 * _radius * _radius;
}

double Circle::GetPerimeter() {
	return 3.1415 * 2 * _radius;
}