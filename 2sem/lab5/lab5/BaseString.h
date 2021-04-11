#include <string>
#pragma once

class BaseString
{
protected: std::string _string;
public:
	BaseString();
	BaseString(std::string str);
	int GetLength();
};

