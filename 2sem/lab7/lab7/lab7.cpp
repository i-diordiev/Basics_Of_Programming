#include <iostream>
#include "MyExpression.h"

using namespace std;

int main()
{
    cout << "C++ Lab #7" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    MyExpression* array = new MyExpression[3];  // creating array of objects 
 
    array[0].SetValues(1, 1, 1); // creating normal object

    cout << "Object #1" << endl;
    try {
        cout << "Value is " << array[0].GetResult() << endl << endl;
    }
    catch (runtime_error err) {
        cout << err.what() << endl << endl;
    }

    array[1].SetValues(2, 0, 1); // creating object with non-positive value in logarithm

    cout << "Object #2" << endl;
    try {
        cout << "Value is " << array[1].GetResult() << endl << endl;
    }
    catch (runtime_error err) {
        cout << err.what() << endl << endl;
    }

    array[2].SetValues(4, -1, 0); // creating object with ZeroDivisionException

    cout << "Object #3" << endl;
    try {
        cout << "Value is " << array[2].GetResult() << endl << endl;
    }
    catch (runtime_error err) {
        cout << err.what() << endl << endl;
    }

    system("pause");
    return 0;
}
