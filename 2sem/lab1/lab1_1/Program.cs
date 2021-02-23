using System;

namespace lab1_1
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("C# Lab #1");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant");
            Console.WriteLine("Decreasing function by return");
            int decr1 = 16,
            decr2 = 61,
            decr3 = -37;

            Decrease_Return(decr1);
            Decrease_Return(decr2);
            Decrease_Return(decr3);

            Console.WriteLine("\nDecreasing function by link");
            Decrease_Link(ref decr1);
            Decrease_Link(ref decr2);
            Decrease_Link(ref decr3);

            Console.WriteLine("\nComparing function by link");
            bool r1 = false,
            r2 = false,
            r3 = false;
            Compare_Link(100, 100, ref r1);
            Compare_Link(-8, 125, ref r2);
            Compare_Link(132, 131, ref r3);

            Console.WriteLine("\nComparing function by return");
            Compare_Return(100, 100);
            Compare_Return(-8, 125);
            Compare_Return(132, 131);
        }

        static void Decrease_Link(ref int num)
        {
            Console.Write(num);
            Console.Write(" -> ");
            int i = 0;
            int mask = 1;
            if (num == 0)
            {
                num = ~num;
            }
            else
            {
                while ((num & (mask << i)) == 0)
                {
                    num |= (mask << i);
                    i++;
                }
                num ^= (mask << i);
            }
            Console.WriteLine(num);
        }

        static int Decrease_Return(int num)
        {
            Console.Write(num);
            Console.Write(" -> ");
            int i = 0;
            int mask = 1;
            if (num == 0)
            {
                num = ~num;
            }
            else
            {
                while ((num & (mask << i)) == 0)
                {
                    num |= (mask << i);
                    i++;
                }
                num ^= (mask << i);
            }
            Console.WriteLine(num);
            return num;
        }

        static void Compare_Link(int num1, int num2, ref bool value)
        {
            Console.Write(num1);
            Console.Write(", ");
            Console.Write(num2);
            Console.Write(" -> ");
            value = (num1 ^ num2) == 0;
            if (value)
            {
                Console.WriteLine("true");
            }
            else
            {
                Console.WriteLine("false");
            }
        }

        static bool Compare_Return(int num1, int num2)
        {
            Console.Write(num1);
            Console.Write(", ");
            Console.Write(num2);
            Console.Write(" -> ");
            if ((num1 ^ num2) == 0)
            {
                Console.WriteLine("true");
                return true;
            }
            Console.WriteLine("false");
            return false;
        }
    }
}
