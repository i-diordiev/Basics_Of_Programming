#include <cmath>
#include "Triangle.h"

Triangle::Triangle(float** points) {
	_points = new float* [3];
	for (int i = 0; i < 3; i++) {
		_points[i] = new float[2];
		for (int j = 0; j < 3; j++) {
			_points[i][j] = points[i][j];
		}
	}
}

double Triangle::GetSquare() {
	double side1 = pow((pow(_points[1][0] - _points[0][0], 2) + pow(_points[1][1] - _points[0][1], 2)), 0.5);
	double side2 = pow((pow(_points[2][0] - _points[0][0], 2) + pow(_points[2][1] - _points[0][1], 2)), 0.5);
	double side3 = pow((pow(_points[2][0] - _points[1][0], 2) + pow(_points[2][1] - _points[1][1], 2)), 0.5);
	double p = (side1 + side2 + side3) / 2;
	return pow(p * (p - side1) * (p - side2) * (p - side3), 0.5);
}

double Triangle::GetPerimeter() {
	double side1 = pow((pow(_points[1][0] - _points[0][0], 2) + pow(_points[1][1] - _points[0][1], 2)), 0.5);
	double side2 = pow((pow(_points[2][0] - _points[0][0], 2) + pow(_points[2][1] - _points[0][1], 2)), 0.5);
	double side3 = pow((pow(_points[2][0] - _points[1][0], 2) + pow(_points[2][1] - _points[1][1], 2)), 0.5);
	return side1 + side2 + side3;
}