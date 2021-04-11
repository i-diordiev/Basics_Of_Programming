#include <iostream>
#include "BaseString.h"
#include "NumericString.h"
using namespace std;

int main()
{
    cout << "C++ Lab #5" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    NumericString str("347219384798321");  // creating numeric string using constructor with parameter

    cout << "String: " << str.GetString() << endl;  // printing characteristics
    cout << "Number: " << str.GetNumber() << endl;
    cout << "Length: " << str.GetLength() << endl;

    system("pause");
    return 0;
}
