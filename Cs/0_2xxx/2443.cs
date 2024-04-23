using System;

namespace _2443
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<i; j++)
                {
                    Console.Write(" ");
                }
               for(int j=2*n-1; j>2*i; j--)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
