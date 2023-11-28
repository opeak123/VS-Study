using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

internal class Program
{

    static void Main(string[] args)
    {
        int a, b, c;

        a = 10;
        b = 20;
        c = 30;

        void TestAr()
        {
            int k = 10;

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine(k);
            }
        }

        for (int i = 0; i < 5; i++)
        {
            a += 5;
            b += 5;
            c += 5;
            Console.Write(a);
            Console.WriteLine("");
            Console.Write(b);
            Console.WriteLine("");
            Console.WriteLine(c);
        }


        Console.WriteLine("안녕하세요");
    }


    
}
