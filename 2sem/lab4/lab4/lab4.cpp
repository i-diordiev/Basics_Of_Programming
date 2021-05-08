#include <iostream>
#include "MySquare.h"
using namespace std;

int main()
{
    cout << "C++ Lab #4" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    float** points = new float* [4];  // points for square
    for (int i = 0; i < 4;i++) {
        points[i] = new float[2];
    }
    points[0][0] = 1;
    points[0][1] = 1;
    points[1][0] = 1;
    points[1][1] = 5;
    points[2][0] = 5;
    points[2][1] = 5;
    points[3][0] = 5;
    points[3][1] = 1;
    
    MySquare K1;  // creating squares using different constructors
    MySquare K2(points);
    MySquare K3(K2);

    float** PointsOfFirst = K1.GetPoints();  // printing start points of every square
    cout << "Points of first figure:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << PointsOfFirst[i][j] << " ";
        }
        cout << endl;
    }

    float** PointsOfSecond = K2.GetPoints();
    cout << "Points of second figure:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << PointsOfSecond[i][j] << " ";
        }
        cout << endl;
    }

    float** PointsOfThird = K3.GetPoints();
    cout << "Points of third figure:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << PointsOfThird[i][j] << " ";
        }
        cout << endl;
    }

    K3 = K3 + 5;  // adding 5 to the third square
    PointsOfThird = K3.GetPoints();
    cout << "Points of third figure after adding 5:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << PointsOfThird[i][j] << " ";
        }
        cout << endl;
    }

    try {
        K1 = K2 / K3;  // dividing K2 by K3
    }
    catch (const char* message) {
        cout << message << endl;
    }
    PointsOfFirst = K1.GetPoints();
    cout << "Points of first figure after dividing K2 by K3:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << PointsOfFirst[i][j] << " ";
        }
        cout << endl;
    }

    delete[] points;
    system("pause");
    return 0;
}
