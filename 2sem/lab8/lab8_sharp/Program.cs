using System;

namespace lab8_sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Lab #8");
            Console.WriteLine("IS-03 Diordiev Ivan");
            Console.WriteLine("2 variant\n");
            
            MyLinkedList list = new MyLinkedList();  // creating list and adding some values

            list.AddNode(4.8);
            list.AddNode(3.2);
            list.AddNode(-1.8);
            list.AddNode(15.9);
            list.AddNode(5.7);
            list.AddNode(3.1);
            list.AddNode(-45.4);
            list.AddNode(-13.2);

            Console.WriteLine("List is: ");  // printing list and counting elements > 10.5
            Node current = list.Head;
            int counter = 0;
            while (current != null)
            {
                Console.Write(current.Value + " ");
                if (current.Value > 10.5)
                    counter++;
                current = current.Next;
            }
            Console.WriteLine("\nNumber of elements greater than 10.5: " + counter);

            list.DeleteAllUnderNum(2.6);  // deleting all values < 2.6 and printing list

            Console.WriteLine("\nList after deletion of numbers < 2.6: ");
            current = list.Head;
            while (current != null)
            {
                Console.Write(current.Value + " ");
                current = current.Next;
            }
        }
    }
}
