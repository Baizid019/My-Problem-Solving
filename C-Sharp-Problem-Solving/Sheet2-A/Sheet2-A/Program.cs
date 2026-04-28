using System;   // Import namespace

namespace MyApplication   // Namespace
{
    class Program        // Class
    {
        static void Main(string[] args)   // Main Method (Entry Point)
        {
            int a = int.Parse(Console.ReadLine());  
            
            for(int i = 1; i <= a; i++)
            {
                Console.WriteLine(i); 
            }

        }
    }
}