#pragma once
class MyExpression
{
private:
	float a, c, d;
	float result;
public:
	MyExpression();
	MyExpression(float a, float c, float d);
	void SetValues(float a, float c, float d);
	void Calculate();
	float GetResult();
};

