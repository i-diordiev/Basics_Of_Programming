using System;
using System.Collections.Generic;
using System.Text;

namespace lab8_sharp
{
    class Node
    {
        public double Value { get; set; }  // property that contains some float value
        public Node Next { get; set; }  // property that contains next element

        public Node(double num)  // constructor
        {
            Value = num;
            Next = null;
        }
    }
}
