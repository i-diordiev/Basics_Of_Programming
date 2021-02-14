#include <iostream>
using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0, n1 = 0, n2 = 0;
    unsigned long number = 100000;
    cout << "Happy numbers are: " << endl;
    for (number; number < 1000000; number++) {
        n1 = number % 1000;
        n2 = number / 1000;
        sum1 = 0;
        sum2 = 0;
        while (n1 > 0) {
            sum1 += (n1 % 10);
            n1 = n1 / 10;
        }
        while (n2 > 0) {
            sum2 += (n2 % 10);
            n2 = n2 / 10;
        }
        if (sum1 == sum2) {
            cout << number << endl;
        }
    }
}
