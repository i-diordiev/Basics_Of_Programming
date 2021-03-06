#include "MyString.h"
#include <iostream>

MyString::MyString() {
	_length = 0;
	_string = new char[_length];
}

MyString::MyString(int len, std::string str) {
	_length = len;
	_string = new char[_length];
	for (int i = 0; i < _length; i++) {
		_string[i] = str[i];
	}
}

void MyString::SetString(std::string str) {
	_length = str.length();
	for (int i = 0; i < _length; i++) {
		_string[i] = str[i];
	}
}

int MyString::GetLength() {
	return sizeof(_string);
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

