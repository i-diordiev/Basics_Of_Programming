using System;

namespace lab6_sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #6");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");

            float[,] points = { { 1, 1 }, { 5, 5 }, { 7, 2 } };
            Triangle tr = new Triangle(points);
            Console.Write("Square of triangle - ");
            Console.WriteLine(tr.GetSquare());
            Console.Write("Perimeter of triangle - ");
            Console.WriteLine(tr.GetPerimeter());
            Console.WriteLine();

            Circle cr = new Circle(4);
            Console.Write("Square of circle - ");
            Console.WriteLine(cr.GetSquare());
            Console.Write("Perimeter of circle - ");
            Console.WriteLine(cr.GetPerimeter());
        }
    }
}
