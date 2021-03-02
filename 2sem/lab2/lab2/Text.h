#pragma once
#include <iostream>
#include <string>
#include "MyString.h"

class Text
{
private:
	int _size;
	int _last_string = 0;
	MyString* _text;
public:
	Text(int size);
	void AddString(std::string string);
	void RemoveString(int num);
	std::string GetText();
	void FindAndRemoveString(std::string str);
	void ClearText();
	int GetLengthOfLongest();
	void SetUpperForFirstLetters();
};

