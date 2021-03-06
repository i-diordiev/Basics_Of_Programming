using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Business;

namespace UnitTest111
{
    [TestClass]
    public class ArithmeticTests
    {
        [TestMethod]
        public void AdditionTest()
        {
            int a = 8;
            int b = 9; 
            int actual;
            int expected = 17;

            actual = Arithmetic.Addition(a, b);

            Assert.AreEqual(expected, actual);
        }
        [TestMethod]
        public void SubstractionTest()
        {
            int a = 18;
            int b = 2;
            int actual;
            int expected = 16;

            actual = Arithmetic.Substraction(a, b);

            Assert.AreEqual(expected, actual);
        }
    }
}
