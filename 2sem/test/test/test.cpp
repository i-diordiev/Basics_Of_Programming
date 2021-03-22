#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void outputing_matr(double[4][4]);
int main()
{
    const int m = 4;
    double A[m][m] = { {6.48, 1.3, 0.77, 1.21}, 
        {1.3, 3.94, 1.3, 0.16},
        {0.77, 1.3, 5.66, 2.1},
        {1.21, 0.16, 2.1, 5.88} };
    double M[m][m] = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };
    double M_dop[m][m] = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };

    cout << "Our Matrix" << endl;
    outputing_matr(A);
    cout << endl;
    for (int k = 1; k < m; k++)
    {
        cout << "Iteration ¹ " << k << "\nKey element is :" << A[m - k][m - k - 1] << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i != m - k - 1)
                {
                    if (i == j)
                    {
                        M[i][j] = 1;
                        M_dop[i][j] = 1;
                    }
                    else
                    {
                        M[i][j] = 0;
                        M_dop[i][j] = 0;
                    }
                }
                else
                {
                    M_dop[i][j] = A[i + 1][j];
                    if (i == j)
                    {
                        M[i][j] = (double)1 / (A[i + 1][i]);
                    }
                    else
                    {
                        M[i][j] = -A[i + 1][j] / A[i + 1][i];
                    }
                }

            }
        }
        double dop_A_with_M[m][m] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };

        for (int t = 0; t < m; t++)
        {
            for (int r = 0; r < m; r++)
            {
                dop_A_with_M[t][r] = 0;
                for (int s = 0; s < m; s++)
                {
                    dop_A_with_M[t][r] += M_dop[t][s] * A[s][r];
                }
            }
        }

        for (int t = 0; t < m; t++)
        {
            for (int r = 0; r < m; r++)
            {
                A[t][r] = 0;
                for (int s = 0; s < m; s++)
                {
                    A[t][r] += dop_A_with_M[t][s] * M[s][r];
                }
            }
        }

        cout << "Matrix M^-1:" << endl;
        outputing_matr(M_dop);
        cout << "Matrix M:" << endl;
        outputing_matr(M);
        cout << "Matrix A" << endl;
        outputing_matr(A);
        cout << endl;


    }

    return 0;
}

void outputing_matr(double matr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << fixed << setw(11) << setprecision(6) << matr[i][j];
        }
        cout << endl;
    }

}
