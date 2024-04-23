using System;
using System.Numerics;

namespace _10757
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str = Console.ReadLine().Split();
            BigInteger num1 = BigInteger.Parse(str[0]);
            BigInteger num2 = BigInteger.Parse(str[1]);

            Console.WriteLine(num1+num2);

        }
    }
}
