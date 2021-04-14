using System;
using System.Collections.Generic;
using System.Text;

namespace lab6_sharp
{
    class Triangle : Figure
    {
        private float[,] _points = new float[3, 2];

        public Triangle(float[,] points)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j =0; j < 2; j++)
                {
                    _points[i, j] = points[i, j];
                }
            }
        }

        public override double GetSquare()
        {
            double side1 = Math.Pow((Math.Pow(_points[1, 0] - _points[0, 0] ,2) + Math.Pow(_points[1, 1] - _points[0, 1], 2)), 0.5);
            double side2 = Math.Pow((Math.Pow(_points[2, 0] - _points[0, 0], 2) + Math.Pow(_points[2, 1] - _points[0, 1], 2)), 0.5);
            double side3 = Math.Pow((Math.Pow(_points[2, 0] - _points[1, 0], 2) + Math.Pow(_points[2, 1] - _points[1, 1], 2)), 0.5);
            double p = (side1 + side2 + side3) / 2;
            return Math.Pow(p * (p - side1) * (p - side2) * (p - side3), 0.5); 
        }

        public override double GetPerimeter()
        {
            double side1 = Math.Pow((Math.Pow(_points[1, 0] - _points[0, 0], 2) + Math.Pow(_points[1, 1] - _points[0, 1], 2)), 0.5);
            double side2 = Math.Pow((Math.Pow(_points[2, 0] - _points[0, 0], 2) + Math.Pow(_points[2, 1] - _points[0, 1], 2)), 0.5);
            double side3 = Math.Pow((Math.Pow(_points[2, 0] - _points[1, 0], 2) + Math.Pow(_points[2, 1] - _points[1, 1], 2)), 0.5);
            return side1 + side2 + side3;
        }
    }
}
