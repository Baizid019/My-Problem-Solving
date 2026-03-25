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

            ll n1 = s1.Length;
            ll n2 = s2.Length;

            Console.Write(n1 + " " + n2);
            Console.WriteLine();
            Console.Write(s1 + s2);
            Console.WriteLine();

            string str1 = s1[0] + s2.Substring(1);
            string str2 = s2[0] + s1.Substring(1);

            Console.Write(str2 + " " + str1);



        }
    }
}