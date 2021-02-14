#include <iostream>
using namespace std;

int factorial(int n) {
    int factor = 1;
    for (int k = 1;k <= n; k++) {
        factor = factor * k;
    }
    return factor;
}


float ex(int x, float eps) {
    float e_add = 1, e_x = 1;
    for (int i = 1;e_add >= eps; i++) {
        e_add = pow(-1, i) * pow(x, i) / factorial(i);
        e_x += e_add;
    }
    return e_x;
}


int main()
{
    int x;
    float eps, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input eps: ";
    cin >> eps;
    if (x >= 0 || x <= 2) {
        y = ex(x, eps) + ex(2 * x, eps);
    }
    else if (x > 2) {
        y = (1 / ex(x + 5, eps)) - ex(x + 2, eps);
    }
    cout << "y = " << y;
    return 0;
}
