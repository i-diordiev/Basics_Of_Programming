using System;

namespace srm5
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 5;
            double[] x = { -4, -2, 0, 2, 4 };
            double[] y = { -2.01, -1.958, 0, 1.958, 2.01 };
            

            Console.WriteLine("\nIнтерполяцiйний полiном Ньютона");
            Newton(x, y, n);

            Console.WriteLine("\nIнтерполяцiя кубiчними сплайнами ");
            for (int i = 0; i < n; i++)
                Spline(x, y, n, x[i]);
        }

        static void Newton(double[] x, double[] y, int n)
        {
            double[] del1 = new double[n - 1];
            double[] del2 = new double[n - 2];
            double[] del3 = new double[n - 3];
            double[] del4 = new double[n - 4];

            for (int k = 0; k < n - 1; k++)
            {
                del1[k] = (y[k] - y[k + 1]) / (x[k] - x[k + 1]);
            }
            for (int j = 0; j < n - 2; j++)
            {
                del2[j] = (del1[j] - del1[j + 1]) / (x[j] - x[j + 2]);
            }
            for (int i = 0; i < n - 3; i++)
            {
                del3[i] = (del2[i] - del2[i + 1]) / (x[i] - x[i + 3]);
            }
            for (int i = 0; i < n - 4; i++)
            {
                del4[i] = (del3[i] - del3[i + 1]) / (x[i] - x[i + 4]);
            }
            Console.WriteLine($"{y[0]:f5}+{del1[0]:f5}*(x-{x[0]}){del2[0]:f5}*(x-{x[0]})*(x-{x[1]})+{del3[0]:f5}*(x-{x[0]})*(x-{x[1]})*(x-{x[2]})+{del4[0]:f5}*(x-{x[0]})*(x-{x[1]})*(x-{x[2]})*(x-{x[3]})");

        }

        static void NewTon(double[] x, double[] y, int n, double X)
        {
            double[] Xn = y;
            double[] delta = new double[n];

            delta[0] = y[0];
        }

        static void Spline(double[] X, double[] Y, int n, double x0)
        {
            double[] a = new double[n - 1];
            double[] b = new double[n - 1];
            double[] d = new double[n - 1];
            double[] h = new double[n - 1];

            double[,] A = new double[n - 1, n];

            double[] by = new double[n];

            for (int i = 0; i < n - 1; i++)
            {
                a[i] = Y[i];
                h[i] = X[i + 1] - X[i];
            }
            A[0, 0] = 1;
            A[n - 2, n - 2] = 1;
            for (int i = 1; i < n - 2; i++)
            {
                A[i, i - 1] = h[i - 1];
                A[i, i] = 2 * (h[i - 1] + h[i]);
                A[i, i + 1] = h[i];
                by[i] = 3 * (((Y[i + 1] - Y[i]) / h[i]) - ((Y[i] - Y[i - 1]) / h[i - 1]));
            }
            double[] c = Progon(A, by, n - 1);

            for (int i = 0; i < n - 1; i++)
            {
                if (i != n - 2)
                {
                    d[i] = (c[i + 1] - c[i]) / (3 * h[i]);
                    b[i] = ((Y[i + 1] - Y[i]) / h[i]) - h[i] * (c[i + 1] + 2 * c[i]) / 3;
                }
                else
                {
                    d[i] = (-1) * (c[i] / (3 * h[i]));
                    b[i] = ((Y[i] - Y[i - 1]) / h[i]) - ((2 * h[i] * c[i]) / 3);

                }
            }
            d[n - 2] = -c[n - 2] / (3 * h[n - 2]);
            b[n - 2] = ((Y[n - 1] - Y[n - 2]) / h[n - 2]) - 2 * h[n - 2] * c[n - 2] / 3;

        }

        static double[] Progon(double[,] A, double[] b, int n)
        {
            double[] K = new double[n];
            int n1 = n - 1;

            double y = A[0, 0];
            double[] a = new double[n];
            double[] b1 = new double[n];
            a[0] = -A[0, 1] / y;
            b1[0] = b[0] / y;
            for (int i = 1; i < n1; i++)
            {
                y = A[i, i] + A[i, i - 1] * a[i - 1];
                a[i] = -A[i, i + 1] / y;
                b1[i] = (b[i] - A[i, i - 1] * b1[i - 1]) / y;
            }
            K[n1] = b1[n1];
            for (int i = n1 - 1; i >= 0; i--)
            {
                K[i] = a[i] * K[i + 1] + b1[i];
            }
            return K;
        }
    }
}
