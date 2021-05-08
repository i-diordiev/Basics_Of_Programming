using System;
using System.Collections.Generic;
using System.Text;

namespace lab7_sharp
{
    class MyExpression
    {
        private float a;
        private float c;
        private float d;
        public double _result;

        public MyExpression()  // default constructor
        {
            a = 1;
            c = 1;
            d = 1;
        }

        public MyExpression(float a, float c, float d)  // constructor with parameters
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }

        public void SetValues(float a, float c, float d)  // values setter
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }

        public void Calculate()  // method for calculating value of expression
        {
            if ((a / 4 + c) == 0)
                throw new Exception("Division by zero! Change A or C!\n");
            else if ((2 * c - a) < 0)
                throw new Exception("Negative value in logarithm! Change A or C!\n");
            else
            {
                _result = (Math.Log10(2 * c - a) + d - 152) / (a / 4 + c);
            }
        }

        public double GetResult()  // result getter
        {
            Calculate();
            return _result;
        }
    }
}
