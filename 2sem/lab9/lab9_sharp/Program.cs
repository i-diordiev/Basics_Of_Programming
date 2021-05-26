using System;

namespace lab9_sharp
{
    class Program
    {
        public static void ShowEvent(object sender, string message)
        {
            Console.WriteLine(message);
        }

        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #9");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");

            char symbol = 'a';
            string str = "askjdhdaLAKJkdfhajsdlasd";
            Console.WriteLine("Count of symbol \"" + symbol + "\" in string \"" + str + "\" using static method is " + MathOps.StatCountSymbol(str, symbol));  // counting number of symbols using static method

            MathOps calculator = new MathOps();  // creating object of MathOps and "signing" method ShowEvent on event in calculator
            calculator.IntDivision += ShowEvent;

            Console.WriteLine("Count of symbol \"" + symbol + "\" in string \"" + str + "\" using non-static method is " + calculator.CountSymbol(str, symbol));  // counting number of symbols using non-static method

            // doing some math operations
            Console.WriteLine(); 
            Console.WriteLine("2 + 5");
            Console.WriteLine(calculator.Addition(2, 5));

            Console.WriteLine();
            Console.WriteLine("3 - 6");
            Console.WriteLine(calculator.Substraction(3, 6));

            Console.WriteLine();
            Console.WriteLine("2 * 9");
            Console.WriteLine(calculator.Multiplication(2, 9));

            Console.WriteLine();
            Console.WriteLine("6 / 2");
            Console.WriteLine(calculator.Division(6, 2));

            Console.WriteLine();
            Console.WriteLine("7 / 2");
            Console.WriteLine(calculator.Division(7, 2));
        }
    }
}
