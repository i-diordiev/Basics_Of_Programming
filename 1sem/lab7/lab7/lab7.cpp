#include <iostream>
using namespace std;

void Generation(float* array, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = (rand() % 1000) * 10. / 1000. - (rand() % 1000) * 10. / 1000.;
    }
}

void CountSum(float* array, float &summa, int n) {
    for (int i = 0; i < n; i++) {
        summa += array[i];
    }
}

void PrintArray(float* array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

void AddSum(float* array, float summa, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            array[i] += summa;
        }
    }
}

int main()
{
    int n = 20;
    float summa = 0;
    float* M = new float[n];
    
    Generation(M, n);
    cout << "Source array is : " << endl;
    PrintArray(M, n);
    CountSum(M, summa, n);
    cout << "\nSum of elements is " << summa << endl;
    AddSum(M, summa, n);
    cout << "Final array is : " << endl;
    PrintArray(M, n);
    return 0;
}
