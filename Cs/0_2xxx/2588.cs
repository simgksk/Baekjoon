using System;

namespace _2588
{
    class Program
    {
        static void Main(string[] args)
        {
            string a1 = Console.ReadLine();
            string a2 = Console.ReadLine();
            char[] a3 = a2.ToCharArray();

            int num1 = int.Parse(a1);
            int[] num2 = new int[a3.Length];

            for(int i=0; i<a3.Length; i++)
            {
                num2[i] = int.Parse(a3[i].ToString());
            }

            Console.WriteLine(num1*num2[2]);
            Console.WriteLine(num1*num2[1]);
            Console.WriteLine(num1*num2[0]);
            Console.WriteLine(num1*num2[2] + num1*num2[1]*10 + num1*num2[0]*100);
        
        }
    }
}
