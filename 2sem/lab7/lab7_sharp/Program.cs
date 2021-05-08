using System;

namespace lab7_sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #7");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");

            int size = 5;
            MyExpression[] array = new MyExpression[size + 1];  // creating array of objects 
            Random rnd = new Random();
            for (int i = 0; i < size; i++)
            {
                int a = rnd.Next(100);  // random generator for a, c, d
                int c = rnd.Next(100);
                int d = rnd.Next(100);

                if (i % 2 == 0)  // creating objects
                    array[i] = new MyExpression(a, c, d);
                else
                {
                    array[i] = new MyExpression();
                    array[i].SetValues(a, c, d);
                }

                Console.WriteLine("Object #" + (i + 1));  // trying to calculate values of expressions
                try
                {
                    Console.WriteLine("Value is " + array[i].GetResult() + "\n");
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }

            int a1 = 4;  // creating object with ZeroDivisionException
            int c1 = -1;
            int d1 = 0;

            array[size] = new MyExpression(a1, c1, d1);
            Console.WriteLine("Object #" + (size + 1));
            try
            {
                Console.WriteLine("Value is " + array[size].GetResult() + "\n");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }
    }
}
