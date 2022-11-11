
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Grafo
{
    class Program
    {
        static void Main(string[] args)
        {

            Vertice oVertice1 = new Vertice(1);
            Vertice oVertice2 = new Vertice(2);
            Vertice oVertice3 = new Vertice(3);
            Vertice oVertice4 = new Vertice(4);
            Vertice oVertice5 = new Vertice(5);
            Vertice oVertice6 = new Vertice(6);

            oVertice6.Aristas.Add(oVertice4);
            oVertice4.Aristas.Add(oVertice5);
            oVertice4.Aristas.Add(oVertice3);
            oVertice3.Aristas.Add(oVertice2);
            oVertice5.Aristas.Add(oVertice2);
            oVertice5.Aristas.Add(oVertice1);
            oVertice2.Aristas.Add(oVertice1);

            Camino(oVertice6);
        }

        public static void Camino(Vertice oVertice)
        {
            if (oVertice != null)
                Console.WriteLine(oVertice.Valor);
                foreach (var oV in oVertice.Aristas)
                
            {
                Camino(oV);
            }
        }

    }
}