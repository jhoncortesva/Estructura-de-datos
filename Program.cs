// See https://aka.ms/new-console-template for more information
class program

{
    static void Main(string[] args)
    {
        // Estaticos

        //bool

        bool bandera = true;
        bool estatus = false;

        int edad = 18;
        bool esMayorDeEdad = (edad >= 18);

        Console.WriteLine(esMayorDeEdad);
        Console.ReadLine();
    



        //string-cadena
        string nombre = "alejandro";

        Console.WriteLine(nombre.ToUpper());
        Console.ReadLine();



        //int- entero

        int numero = 10;
        

        Console.WriteLine(numero);
        Console.ReadLine();

        numero = nombre.Length;

        Console.WriteLine(numero);
        Console.ReadLine();

        // double- doble

        double flotante = 12.3;
        string floatString = "23.2";
        double.TryParse(floatString, out flotante);

        Console.WriteLine(flotante);
        Console.ReadLine();


        // Arrays

      
        int[] num = {12,15,18,22,124,98};

        for (int contador = 0; contador <= num.Length; contador++)
        {
            Console.WriteLine(" El elemento " + (contador + 1) +
             " es igual a " + num[contador]);
        }

        Console.ReadKey();








    }

}



