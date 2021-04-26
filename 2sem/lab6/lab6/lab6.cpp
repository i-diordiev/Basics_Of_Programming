#include <iostream>
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    cout << "C++ Lab #5" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    float** points = new float* [3];  // points for triangle
    for (int i = 0; i < 3;i++) {
        points[i] = new float[2];
    }
    points[0][0] = 1;
    points[0][1] = 1;
    points[1][0] = 5;
    points[1][1] = 5;
    points[2][0] = 7;
    points[2][1] = 2;

    Triangle tr(points);  // creating object Triangle and calling methods
    cout << "Square of triangle - " << tr.GetSquare() << endl;
    cout << "Perimeter of triangle - " << tr.GetPerimeter() << endl << endl;

    Circle cr(4);  // creating object Circle and calling methods
    cout << "Square of circle - " << cr.GetSquare() << endl;  
    cout << "Perimeter of square - " << cr.GetPerimeter() << endl << endl;
  
    delete[] points;
    system("pause");
    return 0;
}