#include "MyString.h"
#include <iostream>


void MyString::SetString(std::string string) {
	_string = string;
}

int MyString::GetLength() {
	return _string.length();
}

std::string MyString::GetString() {
	return _string;
}

void MyString::SetUpperFirst() {
	if (islower(_string[0])) {
		_string[0] = toupper(_string[0]);
	}
}

