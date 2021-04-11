#include "NumericString.h"
#include <string>

NumericString::NumericString(std::string str) {  // constructor with parameter
	_string = str;
}

float NumericString::GetNumber() {  // getting number in float
	return std::stof(_string);
}

std::string NumericString::GetString() {  // getter of string
	return _string;
}