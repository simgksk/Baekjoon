using System;

namespace _2441
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            for(int i=0; i<n; i++)
            {

                for (int j = 0; j < i; j++)
                {
                    Console.Write(" ");
                }
                
                for (int j=0; j<n-i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
    }
}
