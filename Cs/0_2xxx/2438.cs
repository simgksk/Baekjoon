using System;

namespace _2438
{
    class Program
    {
        static void Main(string[] args)
        {
            int a;
            a = int.Parse(Console.ReadLine());

            for (int i = 0; i <a; i++)
            {
                 for(int j=0; j<=i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            
        }
    }
}
