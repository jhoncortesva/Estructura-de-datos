
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Queue
{
    class Program
    {
        static void Main(string[] args)
        {
            CQueue fila = new CQueue();


            fila.Enqueue(5);
            fila.Enqueue(3);
            fila.Enqueue(7);
            fila.Enqueue(1);

            fila.Transversa();

            int valor  =  fila.Dequeue();
            
            Console.WriteLine("el valor adquirido  {0}", valor);
            fila.Transversa();

            Console.WriteLine("el valor observado es  {0} ",fila.peek());
            fila.Transversa();

        }
    }
}

