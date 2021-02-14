#include <iostream>
#include <cmath>
using namespace std;

const int n = 5;
int i_max = 0, j_max = 0;
float M0[n][n], M[n - 1][n - 1];

void generation() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M0[i][j] = (rand() % 10000) * 10. / 1000. - (rand() % 10000) * 10. / 1000.;
        }
    }
}

void maximum() {
    float max = 0, max1 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max1 = fabs(M0[i][j]);
            if (max1 > max) {
                max = max1;
                i_max = i;
                j_max = j;
            }
        }
    }
    cout << "\nMaximum value is " << max << endl;
}

void deletion(int i_max, int j_max) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < i_max && j < j_max) {
                M[i][j] = M0[i][j];
            }
            else if (i < i_max && j >= j_max) {
                M[i][j] = M0[i][j + 1];
            }
            else if (i >= i_max && j < j_max) {
                M[i][j] = M0[i + 1][j];
            }
            else if (i >= i_max && j >= j_max) {
                M[i][j] = M0[i + 1][j + 1];
            }
        }
    }
}

void print_source() {
    cout << "Source matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6.2f ", M0[i][j]);
        }
        cout << endl;
    }
}

void print_final() {
    cout << "Final matrix:" << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf("%6.2f ", M[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    generation();
    print_source();
    maximum();
    deletion(i_max, j_max);
    print_final();
}
