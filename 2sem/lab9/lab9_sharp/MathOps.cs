namespace lab9_sharp
{
    public delegate void MyEventHandler(object sender, string message);  // delegate
    class MathOps
    {
        public event MyEventHandler IntDivision;  // integer division event
        public double Addition(double num1, double num2)  // method +
        {
            return num1 + num2;
        }

        public double Substraction(double num1, double num2)  // method -
        {
            return num1 - num2;
        }

        public double Multiplication(double num1, double num2)  // method *
        {
            return num1 * num2;
        }

        public double Division(double num1, double num2)  //  method /
        {
            if (num1 % num2 == 0)
                IntDivision?.Invoke(this, "Integer division happened");
            return num1 / num2;
        }

        public int CountSymbol(string str, char s)  // non-static method for counting symbol in string
        {
            int counter = 0;
            foreach (char symbol in str)
            {
                if (symbol == s)
                    counter++;
            }
            return counter;
        }

        public static int StatCountSymbol(string str, char s)  // static method for counting symbol in string
        {
            int counter = 0;
            foreach (char symbol in str)
            {
                if (symbol == s)
                    counter++;
            }
            return counter;
        }
    }
}
