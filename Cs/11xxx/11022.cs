using System;
using System.Text;

namespace _11022
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());

            int[] a = new int[t];
            int[] b = new int[t];

            for(int i=0; i<t; i++)
            {
                string[] aAndb = Console.ReadLine().Split();
                a[i] = int.Parse(aAndb[0]);
                b[i] = int.Parse(aAndb[1]);
            }

            StringBuilder Output = new StringBuilder();

            for(int i=0; i<t; i++)
            {
                int aPlusb = a[i] + b[i];
                Output.Append($"Case #{i + 1}: {a[i]} + {b[i]} = ").Append(aPlusb).Append("\n");
            }
            Console.WriteLine(Output.ToString());
        }
    }
}
