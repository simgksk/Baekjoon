using System;

namespace _8393
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, sum=0;
            n = int.Parse(Console.ReadLine());   
           
            for(int i = 1; i<=n; i++)
            {
                sum += i;
            }
            Console.WriteLine($"{sum}");
        }
    }
}
