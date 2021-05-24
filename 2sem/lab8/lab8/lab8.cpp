#include <iostream>
#include "MyLinkedList.h"

using namespace std;

int main()
{
    cout << "C++ Lab #8" << endl;
    cout << "IS-03 Diordiev Ivan" << endl;
    cout << "2 variant" << endl << endl;

    MyLinkedList list;  // creating list and adding some values

    list.AddNode(4.8);
    list.AddNode(3.2);
    list.AddNode(-1.8);
    list.AddNode(15.9);
    list.AddNode(5.7);
    list.AddNode(3.1);
    list.AddNode(-45.4);
    list.AddNode(-13.2);

    cout << "List is: " << endl;  // printing list and counting elements > 10.5
    Node* current = list.GetHead();
    int counter = 0;
    while (current != nullptr) {
        cout << current->GetValue() << " ";
        if (current->GetValue() > 10.5)
            counter++;
        current = current->GetNext();
    }
    cout << endl <<  "Number of elements greater than 10.5: " << counter << endl << endl;

    list.DeleteAllUnderNum(2.6);  // deleting all values < 2.6 and printing list

    current = list.GetHead();
    cout << "List after deletion of numbers < 2.6: " << endl;
    while (current != nullptr) {
        cout << current->GetValue() << " ";
        current = current->GetNext();
    }
    system("pause");
    return 0;
}
