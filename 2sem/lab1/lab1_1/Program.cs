using System;

namespace lab1_1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World");

        }

        static void Decrease_Link(ref int num)
        {
            int i = 0;
            if (num == 0)
            {
                num = ~num;
            }
            else
            {
                while ((num & (1 >> i)) != 0)
                {
                    num ^= (1 >> i);
                    i++;
                }
                num ^= (1 >> i);
            }
        }

        static int Decrease_Return(int num)
        {
            int i = 0;
            if (num == 0)
            {
                num = ~num;
            }
            else
            {
                while ((num & (1 >> i)) != 0)
                {
                    num ^= (1 >> i);
                    i++;
                }
                num ^= (1 >> i);
            }
            return num;
        }

        static void Compare_Link(int num1, int num2, ref bool value)
        {
            value = (num1 ^ num2) == 0;
        }

        static bool Compare_Return(int num1, int num2)
        {
            if ((num1 ^ num2) == 0)
            {
                return true;
            }
            return false;
        }

    }
}
