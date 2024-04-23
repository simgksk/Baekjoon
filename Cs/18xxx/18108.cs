using System;

namespace _100
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int a = int.Parse(ss[0]);

            Console.WriteLine(a - 543);
        }
    }
}
