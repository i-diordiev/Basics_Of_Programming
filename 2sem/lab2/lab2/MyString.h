#pragma once
#include <string>

class MyString
{
private:
	int _length;
	char* _string;
public:
	MyString();
	MyString(int len, std::string str);
	void SetString(std::string str);
	int GetLength();
	std::string GetString();
	void SetUpperFirst();
};
