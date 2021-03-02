#pragma once
#include <string>

class MyString
{
private:
	std::string _string;
public:
	MyString() {};
	void SetString(std::string str);
	int GetLength();
	std::string GetString();
	void SetUpperFirst();
};
