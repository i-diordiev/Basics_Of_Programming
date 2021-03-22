using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace srm4
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 4;
            double a = 0.88,
                   b = -0.02,
                   d = 0.12;
            double[,] matrixA = { {6.48, 1.3, 0.77, 1.21},
        {1.3, 3.94, 1.3, 0.16},
        {0.77, 1.3, 5.66, 2.1},
        {1.21, 0.16, 2.1, 5.88} };
            Console.WriteLine("A:\n");
            Output(matrixA, n);
            Danilovskiy(matrixA, n);

        }
        static void Output(double[,] matrix, int n)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write(String.Format("{0:f5}", matrix[i, j]) + "       ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
        static double[,] MatM(double[,] A, int n, int i, int j)
        {
            double[,] M = new double[n, n];

            for (int k = 0; k < n; k++)
            {
                M[k, k] = 1;
                if (k == j)
                    M[i - 1, k] = 1 / A[i, j];
                else
                    M[i - 1, k] = (-1) * A[i, k] / A[i, j];
            }
            return M;
        }
        static double[,] InvM(double[,] A, int n, int i, int j)
        {
            double[,] invM = new double[n, n];

            for (int k = 0; k < n; k++)
            {
                invM[k, k] = 1;
                invM[i - 1, k] = A[i, k];
            }
            return invM;
        }
        static double[,] Mnoj(double[,] a, double[,] b, int n)
        {
            double[,] c = new double[n, n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    c[i, j] = 0;
                    for (int k = 0; k < n; k++)
                        c[i, j] += a[i, k] * b[k, j];
                }
            }
            return c;
        }
        static void Danilovskiy(double[,] matrixA, int n)
        {
            double[,] M = new double[n, n];
            double[,] invM = new double[n, n];

            int i = n - 1, j = n - 2;
            for (int m = 1; m < 4; m++)
            {
                Console.WriteLine("Iтерацiя {0},    елемент:{1:f6}", m, matrixA[i, j]);
                Console.WriteLine("M{0}:", i);
                M = MatM(matrixA, n, i, j);
                Output(M, n);
                Console.WriteLine("M^(-1){0}:", i);
                invM = InvM(matrixA, n, i, j);
                Output(invM, n);
                Console.WriteLine("D{0}:", m);
                matrixA = Mnoj(invM, matrixA, n);
                matrixA = Mnoj(matrixA, M, n);
                Output(matrixA, n);
                i--; j--;
            }
            Console.WriteLine("P:");
            Output(matrixA, n);
            Polinom(matrixA, n);

        }
        static void Polinom(double[,] matrixA, int n)
        {
            Console.WriteLine("Характеристичне рiвняння:");
            int i = 0;
            for (int k = 4; k >= 0; k--)
            {
                if (k == 4)
                    Console.Write("x^{0} ", k);
                else
                {
                    if (matrixA[0, i] < 0)
                        Console.Write("+ {0:f5}*x^{1} ", -1 * matrixA[0, i], k);
                    else
                        Console.Write("- {0:f5}*x^{1} ", matrixA[0, i], k);
                    i++;
                }
            }
            Console.WriteLine("= 0");
        }
    }
}
