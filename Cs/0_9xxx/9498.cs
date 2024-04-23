using System;

namespace _9498
{
    class Program
    {
        static void Main()
        {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int a = int.Parse(ss[0]);

            if (a == 100)
            {
                Console.WriteLine("A");
            }
            else if (a >= 90)
            {
                Console.WriteLine("A");
            }
            else if (a >= 80)
            {
                Console.WriteLine("B");
            }
            else if(a >= 70)
            {
                Console.WriteLine("C");
            }
            else if(a >= 60)
            {
                Console.WriteLine("D");
            }
            else if(a >= 0)
            {
                Console.WriteLine("F");
            }
            
        }
    }
}
