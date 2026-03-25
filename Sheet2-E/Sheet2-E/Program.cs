using System;
using ll = System.Int64;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            ll n = ll.Parse(Console.ReadLine());

            string[] input = Console.ReadLine().Split();

            ll mx = 0;

            for (int i = 0; i < n; i++)
            {
                ll a = ll.Parse(input[i]);
                mx = Math.Max(mx, a);
            }

            Console.WriteLine(mx);
        }
    }
}