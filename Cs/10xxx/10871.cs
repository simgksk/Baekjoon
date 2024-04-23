using System;
using System.Text;

namespace _10871
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] n = Console.ReadLine().Split();
            string[] x = Console.ReadLine().Split();
            
            StringBuilder a = new StringBuilder();

            for(int i=0; i<int.Parse(n[0]); i++)
            {
                if (int.Parse(n[1]) > int.Parse(x[i]))
                {
                    a.Append(x[i] + " ");
                }                
            }
            Console.WriteLine(a.ToString());
        
        }
    }
}
