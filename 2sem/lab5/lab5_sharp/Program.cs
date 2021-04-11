using System;

namespace lab5_sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #5");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");

            NumericString str = new NumericString("347219384798321");  // creating numeric string using constructor with parameter

            Console.WriteLine("String: " + str.String);  // printing characteristics
            Console.Write("Number: ");
            Console.WriteLine(str.GetNumber());
            Console.Write("Length: ");
            Console.WriteLine(str.GetLength());
        }
    }
}
