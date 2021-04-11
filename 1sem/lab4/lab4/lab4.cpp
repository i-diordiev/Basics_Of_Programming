#include <iostream>
using namespace std;

int main()
{
    int n_max;
    float a_prev = 1, a = 1;
    cout << "Input n: ";
    cin >> n_max;
    for (int n = 1; n <= n_max; n++) {
        a = ((n * a_prev) + 1) / n;
        a_prev = a;
    }
    cout << "\na = " << a << endl;
    return 0;
}
