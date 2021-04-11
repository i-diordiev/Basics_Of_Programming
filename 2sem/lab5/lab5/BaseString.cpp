#include "BaseString.h"
#include <string>

BaseString::BaseString() {  // default constructor
	_string = "";
}

BaseString::BaseString(std::string str) {   // constructor with parameter
	_string = str;
}

int BaseString::GetLength() {  // getter or length
	return _string.length();
}