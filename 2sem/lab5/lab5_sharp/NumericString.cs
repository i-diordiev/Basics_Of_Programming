using System;
using System.Collections.Generic;
using System.Text;

namespace lab5_sharp
{
    class NumericString : BaseString
    {
        public NumericString(string str)  // constructor with parameter
        {
            String = str;
        }

        public float GetNumber()  // getting number in float
        {
            return Convert.ToSingle(String);
        }
    }
}
