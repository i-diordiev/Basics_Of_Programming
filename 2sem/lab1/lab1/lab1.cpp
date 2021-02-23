#include <iostream>
#include "funcs.h"
using namespace std;

int main()
{
    cout << "C++ Lab #1" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl;
    cout << "Decreasing function by return" << endl;
    int decr1 = 16,
        decr2 = 61,
        decr3 = -37;
    DecreaseReturn(decr1);
    DecreaseReturn(decr2);
    DecreaseReturn(decr3);

    cout << endl << "Decreasing function by link" << endl;
    DecreaseLink(decr1);
    DecreaseLink(decr2);
    DecreaseLink(decr3);

    cout << endl << "Comparing function by link" << endl;
    bool r1, r2, r3;
    CompareLink(100, 100, r1);
    CompareLink(-8, 125, r2);
    CompareLink(132, 131, r3);

    cout << endl << "Comparing function by return" << endl;
    CompareReturn(100, 100);
    CompareReturn(-8, 125);
    CompareReturn(132, 131);

    system("pause");
    return 0;
}