using System;
using Business;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1 = 66;
            int num2 = 88;
            int res = Arithmetic.Addition(num1, num2);

            Console.WriteLine($"{num1} plus {num2} equal {res}");
        }
    }
}
