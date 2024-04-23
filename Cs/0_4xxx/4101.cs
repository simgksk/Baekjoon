using System;

namespace _4101
{
    class Program
    {
        static void Main(string[] args)
        {
            for(; ; )
            {

                string[] s = Console.ReadLine().Split();
                int a = int.Parse(s[0]);
                int b = int.Parse(s[1]);

                if (a == 0 && b == 0) break;

                int r = a - b;
                string result = (r > 0) ? "Yes" : "No";
                Console.WriteLine(result);
            }
        }
    }
}
