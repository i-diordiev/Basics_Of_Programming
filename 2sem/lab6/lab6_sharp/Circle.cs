using System;
using System.Collections.Generic;
using System.Text;

namespace lab6_sharp
{
    class Circle : Figure
    {
        private float _radius;

        public Circle(float r)
        {
            _radius = r;
        }

        public override double GetPerimeter()
        {
            return 3.1415 * _radius * _radius;
        }

        public override double GetSquare()
        {
            return 3.1415 * 2 * _radius;
        }
    }
}
