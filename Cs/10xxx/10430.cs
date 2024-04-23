using System;

namespace _10430
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str = Console.ReadLine().Split();
            int A = int.Parse(str[0]);
            int B = int.Parse(str[1]);
            int C = int.Parse(str[2]);

            Console.WriteLine((A + B) % C);
            Console.WriteLine(((A % C) + (B % C)) % C);
            Console.WriteLine((A*B) % C);
            Console.WriteLine(((A % C) * (B % C)) % C);
        }
    }
}
