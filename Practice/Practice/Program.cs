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

            ll[] arr; 

            arr = Array.ConvertAll(s, ll.Parse); 

            for(int i = 0; i < n; i++)
            {
                Console.Write(arr[i] + " " ); 
            }

           // Console.WriteLine();    
        }

    }
}