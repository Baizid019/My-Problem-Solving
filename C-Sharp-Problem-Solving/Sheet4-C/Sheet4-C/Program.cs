using System;
using ll = System.Int64;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            string s1 = Console.ReadLine();
            string s2 = Console.ReadLine();

            if (string.Compare(s1, s2) <= 0)
                Console.WriteLine(s1);
            else
                Console.WriteLine(s2);
        }
    }
}