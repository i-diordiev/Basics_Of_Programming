#include <cmath>
#include "MyExpression.h"

MyExpression::MyExpression() {  // default constructor
	a = 1;
	c = 1;
	d = 1;
}

MyExpression::MyExpression(float a, float c, float d) {  // constructor with parameters
	this->a = a;
	this->c = c;
	this->d = d;
}

void MyExpression::SetValues(float a, float c, float d) {  // values setter
	this->a = a;
	this->c = c;
	this->d = d;
}

void MyExpression::Calculate() {  // method for calculating value of expression
	if ((a / 4 + c) == 0)
		throw "Division by zero! Change A or C!";
	else if ((2 * c - a) < 0)
		throw "Negative value in logarithm! Change A or C!";
	else {
		result = (log10(2 * c - a) + d - 152) / (a / 4 + c);
	}
}

float MyExpression::GetResult() {  // result getter
	Calculate();
	return result;
}