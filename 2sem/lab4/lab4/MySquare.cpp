#include <cmath>
#include <string>
#include "MySquare.h"

MySquare::MySquare() {  // default constructor
	_points = new float*[4];
	for (int i = 0; i < 4; i++) {
		_points[i] = new float[2];
	}
	_points[0][0] = 0;
	_points[0][1] = 0;
	_points[1][0] = 1;
	_points[1][1] = 0;
	_points[2][0] = 1;
	_points[2][1] = 1;
	_points[3][0] = 0;
	_points[3][1] = 1;
}

MySquare::MySquare(float** points) {  // constructor with parameters
	_points = new float* [4];
	for (int i = 0; i < 4; i++) {
		_points[i] = new float[2];
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			_points[i][j] = points[i][j];
		}
	}
}

MySquare::MySquare(MySquare& figure) {  // constructor of copy
	this->_points = figure._points;
}

float MySquare::GetSquare() {  // method for getting square
	float side = pow((pow(_points[1][0] - _points[0][0], 2) + pow(_points[1][1] - _points[0][1], 2)), 1 / 2);
	return pow(side, 2);
}

float MySquare::GetPerimeter() {  // method for geting perimeter
	float side = pow((pow(_points[1][0] - _points[0][0], 2) + pow(_points[1][1] - _points[0][1], 2)), 1 / 2);
	return 4 * side;
}

float** MySquare::GetPoints() {  // points getter
	return _points;
}

MySquare MySquare::operator / (MySquare right) {  // overloaded operator /
	float** leftSource = this->GetPoints();
	float** rightSource = right.GetPoints();
	float** temp = new float* [4];
	for (int i = 0; i < 4; i++) {
		temp[i] = new float[2];
		for (int j = 0; j < 2;j++) {
			temp[i][j] = leftSource[i][j] / rightSource[i][j];
		}
	}

	MySquare result(temp);
	delete[] temp;
	return result;
}

MySquare MySquare::operator + (float num) {  // overloaded operator +
	float** leftSource = this->GetPoints();
	float** temp = new float* [4];
	for (int i = 0; i < 4; i++) {
		temp[i] = new float[2];
		for (int j = 0; j < 2;j++) {
			temp[i][j] = leftSource[i][j] + num;
		}
	}

	MySquare result(temp);
	delete[] temp;
	return result;
}

