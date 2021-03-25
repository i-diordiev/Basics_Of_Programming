using System;

namespace lab3
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("C# Lab #3");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant");

            const int SIZE = 16;
            char[] vals = new char[SIZE] { 'H', 'y', 'J', 'o', '9', 'P', 'k', 'b', '3', 'a', 'b', 'S', 'h', '5', 'y', 'Y'};
            MyClass test = new MyClass(vals, SIZE);

            Console.WriteLine("Number of vowels:");
            Console.WriteLine(test.NumOfVowel);

            Console.WriteLine("Type index of element to get: ");
            int index_to_find = Convert.ToInt32(Console.ReadLine()) - 1;
            Console.WriteLine("Element is " + test._array[index_to_find]);
        }
    }

    class MyClass
    {
        public int _size;
        public char[] _array;
    
        public MyClass(char[] source, int size) //constructor
        {
            _array = source;
            _size = size;
        }

        public char this[int index] { //indexator
            get
            {
                if (index < _size && index >= 0)
                {
                    return Char.ToUpper(_array[index]);
                }
                else if (index > _size)
                {
                    return Char.ToUpper(_array[_size - 1]);
                } else
                {
                    return Char.ToUpper(_array[0]);
                }
            }
            set
            {
                if (index < _size && index >= 0)
                {
                    _array[index] = value;
                }
            }
        }
        public int NumOfVowel //property
        {
            get
            {
                return this.CountVowel();
            }
        }

        public int CountVowel() //method for counting vowels in char array
        {
            int count = 0;
            foreach (char element in _array)
            {
                char current = Char.ToLower(element);
                if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u' || current == 'y')
                {
                    count++;
                }
            }
            return count;
        }
    }
}
