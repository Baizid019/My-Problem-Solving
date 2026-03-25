using System;   // Import namespace


namespace MyApplication   // Namespace
{
    class Program        // Class
    {
        static void Main(string[] args)   // Main Method (Entry Point)
        {
            int a = 1999;  


            for(int i = 0; i < 1e5;i++)
            {
                int b = int.Parse(Console.ReadLine()) ; 

                if (b == a)
                {
                    Console.WriteLine("Correct");
                    break; 
                }
                else
                {
                    Console.WriteLine("Wrong"); 
                }
            }
        }
    }
}