using System;   // Import namespace

namespace MyApplication   // Namespace
{
    class Program        // Class
    {
        static void Main(string[] args)   // Main Method (Entry Point)
        {
            int a = int.Parse(Console.ReadLine());

            bool f = false; 
            for (int i = 1; i <= a; i++)
            { 
                if(i%2==0)
                {
                    Console.WriteLine(i);
                    f = true; 
                }
            }

            if(!f)
            {     
                Console.WriteLine("-1"); 
            }
        }
    }
}