using System;

namespace lab4_sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #4");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");

            float[,] points = { { 1, 1 }, { 1, 5 }, { 5, 5 }, { 5, 1 } };  // points for square
             
            MySquare K1 = new MySquare();  // creating squares using different constructors
            MySquare K2 = new MySquare(points);
            MySquare K3 = new MySquare(ref K2);

            float[,] PointsOfFirst = K1.GetPoints();  // printing start points of every square
            Console.WriteLine("Points of first figure:");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(PointsOfFirst[i, j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }

            float[,] PointsOfSecond = K2.GetPoints();
            Console.WriteLine("Points of second figure:");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(PointsOfSecond[i, j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }

            float[,] PointsOfThird = K3.GetPoints();
            Console.WriteLine("Points of third figure:");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(PointsOfThird[i, j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }

            K3 = K3 + 5;  // adding 5 to the third square
            PointsOfThird = K3.GetPoints();
            Console.WriteLine("Points of third figure after adding 5:");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(PointsOfThird[i, j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }

            K1 = K2 / K3;  // dividing K2 by K3
            PointsOfFirst = K1.GetPoints();
            Console.WriteLine("Points of first figure after dividing K2 by K3:");
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(PointsOfFirst[i, j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
            }
        }
    }
}
