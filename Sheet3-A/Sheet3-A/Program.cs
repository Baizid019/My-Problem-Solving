using System;
using ll = System.Int64;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            ll n = ll.Parse(Console.ReadLine());

            string[] s = Console.ReadLine().Split();

            ll sum = 0; 

            for (int i = 0; i < n; i++)
            {
                sum += ll.Parse(s[i]); 
            }

            sum = Math.Abs(sum);

            Console.WriteLine(sum);
        }

    }
}