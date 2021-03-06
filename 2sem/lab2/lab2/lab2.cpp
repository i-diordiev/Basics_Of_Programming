#include <iostream>
#include "MyString.h"
#include "Text.h"

using namespace std;

int main()
{
    cout << "C++ Lab #2" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;
    
    int text_size;
    cout << "Enter number of strings: ";
    cin >> text_size;
    cin.ignore(32767, '\n');

    Text MyText(text_size);
    for (int i = 0; i < text_size; i++) {
        string current;
        cout << "Enter string: ";
        getline(cin, current);
        MyText.AddString(current);
    }

    cout << endl << "Source text is: " << endl;
    cout << MyText.GetText();

    cout << endl << "Setting up first letters to uppercase" << endl;
    MyText.SetUpperForFirstLetters();
    cout << MyText.GetText() << endl;

    int pos_to_remove;
    do {
        cout << endl << "Enter number of string to remove: ";
        cin >> pos_to_remove;
    } while (pos_to_remove > text_size);
    pos_to_remove--;
    MyText.RemoveString(pos_to_remove);

    cout << "Text after removing string: " << endl;
    cout << MyText.GetText() << endl;

    string key;
    cout << endl << "Enter word to remove a string with this word: ";
    cin >> key;
    MyText.FindAndRemoveString(key);
    cout << "Text after removing string: " << endl;
    cout << MyText.GetText() << endl;

    cout << endl << "Length of the longest string: " << MyText.GetLengthOfLongest() << endl;
    cout << "Clearing text" << endl;
    MyText.ClearText();

    system("pause");
    return 0;
}
