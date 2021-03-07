#include "MyString.h"
#include <iostream>

MyString::MyString() { }

void MyString::SetString(std::string str) {
	_length = str.length();
	_string = new char[_length + 1];
	for (int i = 0; i < _length; i++) {
		_string[i] = str[i];
	}
	_string[_length] = '\0';
 }

int MyString::GetLength() {
	return _length;
}

std::string MyString::GetString() {
	std::string string;
	for (int i = 0; i < _length; i++) {
		string += _string[i];
	}
	return string;
}

void MyString::SetUpperFirst() {
	if (islower(_string[0])) {
		_string[0] = toupper(_string[0]);
	}
}

void MyString::DeleteString() {
	delete[] _string;
	_length = 0;
}