using System;

namespace Srm6
{
    class Program
    {
        static void Main(string[] args)
        {
            double e = 0.00001;
            Console.WriteLine("Полiном:\n9*x^5+3*x^2-2^x-1=0\nТочнiсть:{0}\n", e);
            double[] a = { 1 };
            double[] b = { 3 };

            for (int i = 0; i < 1; i++)
            {
                Console.WriteLine("x{0} Є [{1};{2}]", i + 1, a[i], b[i]);
                //MethodBisection(a[i], b[i], e);
                MethodHord(a[i], b[i], e);
                //MethodNewton(a[i], b[i], e);
                Console.WriteLine();
            }
        }

        static double Func(double x)
        {
            int n = 5;
            int[] A = { 1, -3, 0, 7, 0, -12 };
            double result = 0;
            for (int i = n; i >= 0; i--)
                result += A[i] * Math.Pow(x, i);

            return result;
        }
        static double Func1(double x)
        {
            int n = 4;
            int[] A = { 5, -12, 0, 14, 0 };
            double result = 0;
            for (int i = n; i >= 0; i--)
                result += A[i] * Math.Pow(x, i);

            return result;
        }
        static double Func2(double x)
        {
            int n = 3;
            int[] A = { 6, 0, 0, 20 };
            double result = 0;
            for (int i = n; i >= 0; i--)
                result += A[i] * Math.Pow(x, i);

            return result;
        }
        static void MethodBisection(double a, double b, double e)
        {
            int iter = 0;
            double x;
            if (Func(a) == 0) x = a;
            else if (Func(b) == 0) x = b;
            else
            {
                double c = 0;
                while (Math.Abs(b - a) > e || Math.Abs(Func(c)) > e)
                {
                    c = (a + b) / 2;
                    if (Func(a) * Func(c) < 0)
                    {
                        b = c;
                    }
                    else
                    {
                        a = c;
                    }
                    iter++;
                }
                x = c;
            }
            Console.WriteLine("Метод бiсекцiї\tx={0:f5}\tiтерацiй:{1}", x, iter);
        }

        static void MethodHord(double a, double b, double e)
        {
            int iter = 0;
            double x;
            x = a - (b - a) / (Func(b) - Func(a)) * Func(a);
            while (Math.Abs(Func(x)) > e || (Math.Abs(x - a) > e && Math.Abs(x - b) > e))
            {
                if (Func(a) * Func2(a) > 0)
                {
                    b = x;
                    x = x - (Func(x) * (x - a) / (Func(x) - Func(a)));
                }
                else
                {
                    a = x;
                    x = x - (Func(x)) / (Func(b) - Func(x)) * (b - x);
                }
                iter++;
            }
            Console.WriteLine("Метод хорд\tx={0:f5}\tiтерацiй:{1}", x, iter);
        }
        static void MethodNewton(double a, double b, double e)
        {
            int iter = 1;
            double x, x0 = 0;
            if (Func(a) * Func2(a) > 0) x0 = a;
            else x0 = b;
            x = x0 - Func(x0) / Func1(x0);
            while (Math.Abs(x - x0) > e || Math.Abs(Func(x)) > e)
            {
                iter++;
                x0 = x;
                x = x0 - Func(x0) / Func1(x0);
            }
            Console.WriteLine("Метод Ньютона\tx={0:f5}\tiтерацiй:{1}", x, iter);
        }
    }
}
