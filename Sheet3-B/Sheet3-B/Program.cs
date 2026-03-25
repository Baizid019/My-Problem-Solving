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

            ll ck = ll.Parse(Console.ReadLine());

            ll pos = - 1; 

            for (int i = 0; i < n; i++)
            {
                ll num = ll.Parse(s[i]);
                if (num == ck)
                {
                    pos = i;
                    break;
                }
            }

            Console.WriteLine(pos);
        }

    }
}