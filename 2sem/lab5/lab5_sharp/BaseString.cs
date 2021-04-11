using System;
using System.Collections.Generic;
using System.Text;

namespace lab5_sharp
{
    class BaseString
    {
        public string String { get; protected set; } 

        public BaseString() { }  // default counstructor
        public BaseString(string str)  // constructor with parameter
        {
            String = str;
        }

        public int GetLength()  // getter of length
        {
            return String.Length;
        }
    }
}
