using System;

namespace lab2_sharp
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("C# Lab #2");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant");

            Console.WriteLine("Enter number of strings: ");
            int text_size = int.Parse(Console.ReadLine());

            Text MyText = new Text(text_size);
            for (int i = 0; i < text_size; i++)
            {
                Console.WriteLine("Enter string: ");
                string current = Console.ReadLine();
                MyText.AddString(current);
            }
            Console.WriteLine("\nSource text is:\n" + MyText.GetText());
            Console.WriteLine("\nSetting up first letters to uppercase\n");
            MyText.SetUpperForFirstLetter();
            Console.WriteLine(MyText.GetText());

            Console.WriteLine("Enter number of string to remove: ");
            int pos_to_remove = Convert.ToInt32(Console.ReadLine());
            pos_to_remove--;
            MyText.RemoveString(pos_to_remove);
            Console.WriteLine("\nText after removing string: \n" + MyText.GetText());

            Console.WriteLine("\nEnter word to remove a string with this word: \n");
            string key = Console.ReadLine();
            MyText.FindAndRemoveString(key);
            Console.WriteLine("\nText after removing string: \n" + MyText.GetText());

            Console.WriteLine("Length of the longest string: " + Convert.ToString(MyText.GetLengthOfLongest()));
            Console.WriteLine("Clearing text");
            MyText.ClearText();
        }
    }
}