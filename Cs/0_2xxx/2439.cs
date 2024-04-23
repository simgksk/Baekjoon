using System;

namespace _2439
{
    class Program
    {
        static void Main(string[] args)
        {
            int a;
            a = int.Parse(Console.ReadLine());

            for (int i = 0; i <a; i++)
            {
                 for(int j=0; j<(a-i-1); j++)
                {
                    Console.Write(" ");
                }
                 for(int k=0; k<=i; k++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            
        }
    }
}
