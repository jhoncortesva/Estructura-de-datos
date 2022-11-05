
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace stack_example
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<string> pila = new Stack<string>();

            pila.Push("a");
            pila.Push("b");
            pila.Push("c");
            pila.Push("d");
            pila.Push("e");

            pila.Pop();

            Console.WriteLine("Primer elemento: " + pila.Peek());

            Console.WriteLine("Num elementos: " + pila.Count);

            foreach (string p in pila)
            {
                Console.WriteLine(p);
            }

            while (pila.Count != 0)
            {
                string p = pila.Pop();
                Console.WriteLine(p);
            }

            Console.WriteLine("Num elementos: " + pila.Count);

            Console.ReadLine();
        }
    }
}