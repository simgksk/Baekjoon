using System;

namespace _1008
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            double a = int.Parse(ss[0]);
            double b = int.Parse(ss[1]);
            Console.WriteLine(a / b);
        }
    }
}
