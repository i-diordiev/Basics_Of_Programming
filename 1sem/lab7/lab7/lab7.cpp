#include <iostream>
using namespace std;

const int n = 20;
float summa = 0;
float M[n];

void generation() {
    for (int i = 0; i < n; i++) {
        M[i] = (rand() % 1000) * 10. / 1000. - (rand() % 1000) * 10. / 1000.;
    }
}

float sum() {
    for (int i = 0; i < n; i++) {
        summa += M[i];
    }
    return summa;
}

void print() {
    for (int i = 0; i < n; i++) {
        cout << M[i] << " ";
    }
}

void add_sum(float summa) {
    for (int i = 0; i < n; i++) {
        if (M[i] < 0) {
            M[i] += summa;
        }
    }
}

int main()
{
    generation();
    cout << "Source array is : " << endl;
    print();
    summa = sum();
    cout << "\nSum of elements is " << summa << endl;
    add_sum(summa);
    cout << "Final array is : " << endl;
    print();
    return 0;
}
