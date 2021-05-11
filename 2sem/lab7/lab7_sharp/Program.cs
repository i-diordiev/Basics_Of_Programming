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

            MyExpression[] array = new MyExpression[3];  // creating array of objects 

            array[0] = new MyExpression(1, 1, 1);
            Console.WriteLine("Object #1");
            try
            {
                Console.WriteLine("Value is " + array[0].GetResult() + "\n");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            
            array[1] = new MyExpression(2, 0, 1);  // creating object with non-positive value in logarithm
            Console.WriteLine("Object #2");
            try
            {
                Console.WriteLine("Value is " + array[1].GetResult() + "\n");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }


            array[2] = new MyExpression(4, -1, 0);  // creating object with ZeroDivisionException
            Console.WriteLine("Object #3");
            try
            {
                Console.WriteLine("Value is " + array[2].GetResult() + "\n");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }
    }
}
