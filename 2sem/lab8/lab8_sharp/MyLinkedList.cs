using System;
using System.Collections.Generic;
using System.Text;

namespace lab8_sharp
{
    class MyLinkedList
    {
        public Node Head { get; private set; }  // property that contains head element

        public MyLinkedList()  // constructor
        {
            Head = null;
        }

        public Node CreateNode(double num)  // method for creating node
        {
            return new Node(num);
        }

        public void AddNode(double num)  // method for creating node and adding it to the end of list
        {
            if (Head == null)
                Head = CreateNode(num);
            else
            {
                Node current = Head;
                while (current.Next != null)
                {
                    current = current.Next;
                }
                current.Next = CreateNode(num);
            }
        }

        public void DeleteAllUnderNum(double num)  // method for deleting all elements < num
        {
            Node current = Head;
            Node next = Head.Next;

            if (current.Value < num)
            {
                Head = next;
                current = Head;
                next = current.Next;
            }

            while (next != null)
            {
                if (next.Value < num)
                {
                    current.Next = next.Next;
                    next = current.Next;
                }
                else
                {
                    current = current.Next;
                    next = current.Next;
                }
            }
        }
    }
}
