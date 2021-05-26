#include <iostream>
using namespace std;

int CountSymbol(string str, char s) {  // function for searching count of symbol in string
    int counter = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == s)
            counter++;
    }
    return counter;
}

int main()
{
    cout << "C++ Lab #9" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    string str = "askjdhdaLAKJkdfhajsdlasd";
    char symbol = 'a';

    int (*fncPtr)(string, char) = CountSymbol;  // creating pointer on function
    cout << "Count of symbol \"" << symbol << "\" in string \"" << str << "\" using function pointer is " << fncPtr(str, symbol) << endl;

    system("pause");
    return 0;
}

