#pragma once
#include <string>

class MyString
{
private:
	int _length = 0;
	char* _string = new char[_length + 1];
public:
	MyString();
	void SetString(std::string str);
	int GetLength();
	std::string GetString();
	void SetUpperFirst();
	void DeleteString();
};
