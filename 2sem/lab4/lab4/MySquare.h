#pragma once
class MySquare
{
private:
	float** _points;
public:
	MySquare();
	MySquare(float** points);
	MySquare(MySquare& figure);
	float GetSquare();
	float GetPerimeter();
	float** GetPoints();
	MySquare operator / (MySquare right);
	MySquare operator + (float num);
};
