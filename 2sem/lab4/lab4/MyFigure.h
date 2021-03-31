#pragma once
class MyFigure
{
private:
	int point1[2];
	int point2[2];
	int point3[2];
	int point4[2];
public:
	MyFigure(int point1[2]=[0, 0], int point2 = [1, 0], int point3 = [1, 1], int point4 = [0, 1]);
	MyFigure(int points[4][2]);
	MyFigure(MyFigure& figure);
	void SetPoints(int points[4][2]);
	float GetSide(int point1[2], int point2[2]);
	float GetSquare();
	float GetPerimeter();
	float GetPoints();
};

