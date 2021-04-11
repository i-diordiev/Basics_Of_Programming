#include <iostream>
#include <cmath>
using namespace std;


void Generation(float** matrix, int n) {
    for (int i = 0; i < n; i++) {
        matrix[i] = new float[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 10000) * 10. / 1000. - (rand() % 10000) * 10. / 1000.;
        }
    }
}

void FindMax(float** matrix, int& i_max, int& j_max, int n) {
    float max = 0, max1 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max1 = fabs(matrix[i][j]);
            if (max1 > max) {
                max = max1;
                i_max = i;
                j_max = j;
            }
        }
    }
    cout << "\nMaximum value is " << max << endl << endl;
}

void Deletion(float** source_matrix, float** end_matrix, int n, int i_max, int j_max) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (i < i_max && j < j_max) {
                end_matrix[i][j] = source_matrix[i][j];
            }
            else if (i < i_max && j >= j_max) {
                end_matrix[i][j] = source_matrix[i][j + 1];
            }
            else if (i >= i_max && j < j_max) {
                end_matrix[i][j] = source_matrix[i + 1][j];
            }
            else if (i >= i_max && j >= j_max) {
                end_matrix[i][j] = source_matrix[i + 1][j + 1];
            }
        }
    }
}

void PrintMatrix(float** matrix, int n) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6.2f ", matrix[i][j]);
        }
        cout << endl;
    }
}


int main()
{
    int n = 5;
    int i_max = 0, j_max = 0;
    float** M0 = new float* [n];
    float** M = new float* [n - 1];
    for (int i = 0; i < n - 1;i++) {
        M[i] = new float[n - 1];
    }
    
    Generation(M0, n);
    cout << "Source matrix" << endl;
    PrintMatrix(M0, n);
    FindMax(M0, i_max, j_max, n);
    Deletion(M0, M, n, i_max, j_max);
    cout << "Final matrix" << endl;
    PrintMatrix(M, n - 1);

    return 0;
}
