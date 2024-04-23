using System;

namespace _2752
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            int b = int.Parse(s[1]);
            int c = int.Parse(s[2]);

            int[] intArray = { a, b, c };
            Array.Sort(intArray);
            Console.WriteLine($"{String.Join(" ", intArray)}");
        }
    }
}
