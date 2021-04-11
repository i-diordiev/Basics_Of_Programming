#pragma once
#include "BaseString.h"
class NumericString : public BaseString
{
public:
	NumericString(std::string str);
	float GetNumber();
	std::string GetString();
};

