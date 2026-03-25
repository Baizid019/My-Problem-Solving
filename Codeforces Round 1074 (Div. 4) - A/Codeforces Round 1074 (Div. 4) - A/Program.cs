using System;
using ll = System.Int64;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {

            ll t = ll.Parse(Console.ReadLine());

            while (t>0)
            {
                ll n = ll.Parse(Console.ReadLine());

                for(ll i = 1; i <= n; i++)
                {
                    Console.Write(i + " ");
                }
                Console.WriteLine();

                t--; 
            }



        }
    }
}