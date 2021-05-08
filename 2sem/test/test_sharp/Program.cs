using System;

namespace srm7
{
    class Program
    {
        static void Main(string[] args)
        {
            double a = 1, b = 3, e = 0.0001, k = 0;
            Console.WriteLine("Лiмiт:\ncos(x)/(x+1)\nвiд {0} до {1} з точнiстю до {2}\n", a, b, e);
            Console.WriteLine("Метод трапецii:\n{0:f4}\nКiлькiсть iтерацiй: {1}\n", Trapezium(ref k, a, b, e), k);
            Console.WriteLine("Метод Гауса:\n{0:f4}", Gausa(a, b));
        }
        static double Func(double x)
        {
            return Math.Cos(x) / (x + 1);
        }
        static double Trapezium(ref double k, double a, double b, double e)
        {
            int n = 2;
            double rez0 = 1, rez = 0;
            while (Math.Abs(rez - rez0) > e)
            {
                rez0 = rez;
                rez = 0;
                double h = (b - a) / n, x = a;
                for (int i = 0; i < n - 1; i++)
                {
                    rez += (Func(x) + Func(x + h)) / 2;
                    x += h;
                }
                rez *= h;
                n *= 2;
                k++;
            }

            return rez;
        }

        static double Gausa(double a, double b)
        {
            double x, rez = 0;
            double[] X = { -0.861136, -0.339981, 0.339981, 0.861136 };
            double[] A = { 0.347855, 0.652145, 0.652145, 0.347855 };
            for (int i = 0; i < 4; i++)
            {
                x = (a + b) / 2 + X[i] * (b - a) / 2;
                rez += A[i] * Func(x);
            }
            return rez * (b - a) / 2;
        }
    }
}
