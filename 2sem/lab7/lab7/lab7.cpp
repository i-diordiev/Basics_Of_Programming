#include <iostream>
#include "MyExpression.h"

using namespace std;

int main()
{
    cout << "C++ Lab #7" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    int size = 5;
    MyExpression* array = new MyExpression[size + 1];  // creating array of objects 
    for (int i = 0; i < size; i++) {
        int a = rand() % 100;  // random generator for a, c, d
        int c = rand() % 100;
        int d = rand() % 100;
        array[i].SetValues(a, c, d);  // setting a, c, d for each object

        cout << "Object #" << i + 1 << endl;  // trying to calculate values of expressions
        try {
            cout << "Value is " << array[i].GetResult() << endl << endl;
        }
        catch(const char* message) {
            cout << message << endl << endl;
        }
    }

    int a = 4;  // creating object with ZeroDivisionException
    int c = -1;
    int d = 0;
    array[size].SetValues(a, c, d);

    cout << "Object #" << size + 1 << endl;
    try {
        cout << "Value is " << array[size].GetResult() << endl << endl;
    }
    catch (const char* message) {
        cout << message << endl << endl;
    }

    system("pause");
    return 0;
}
