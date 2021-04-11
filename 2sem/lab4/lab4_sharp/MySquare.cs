using System;

namespace lab4_sharp
{
    class MySquare
    {
        private float[,] _points = new float[4, 2];

        public MySquare()  // default constructor
        {
            _points[0, 0] = 0;
            _points[0, 1] = 0;
            _points[1, 0] = 1;
            _points[1, 1] = 0;
            _points[2, 0] = 1;
            _points[2, 1] = 1;
            _points[3, 0] = 0;
            _points[3, 1] = 1;
        }

        public MySquare(float[,] points)  // constructor with parameters
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    _points[i, j] = points[i, j];
                }
            }
        }

        public MySquare(ref MySquare source)  // constructor of copy
        {
            this._points = source._points;
        }

        public float[,] GetPoints()  // points getter
        {
            return _points;
        }

        public double GetSquare()  // method for getting square
        {
            double side = Math.Pow(Math.Pow(_points[1, 0] - _points[0, 0], 2) + Math.Pow(_points[1, 1] - _points[0, 1], 2), 1 / 2);
            return side * side;
        }

        public double GetPerimeter()  // method for geting perimeter
        {
            double side = Math.Pow(Math.Pow(_points[1, 0] - _points[0, 0], 2) + Math.Pow(_points[1, 1] - _points[0, 1], 2), 1 / 2);
            return 4 * side;
        }

        public static MySquare operator / (MySquare left, MySquare right)  // overloaded operator /
        {
            float[,] p = new float[4, 2];
            for (int i = 0; i < 4; i++)
            {
                for (int j =0; j <2; j++)
                {
                    p[i, j] = left._points[i, j] / right._points[i, j];
                }
            }
            MySquare Result = new MySquare(p);
            return Result;
        }

        public static MySquare operator + (MySquare left, float num)  // overloaded operator +
        {
            float[,] p = new float[4, 2];
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    p[i, j] = left._points[i, j] + num;
                }
            }
            MySquare Result = new MySquare(p);
            return Result;
        }
    }
}
