#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Crear variables
  int numerote = 5;               // Entero (todo el número)
  float numeroteflotante = 5.99;     // Flotante
  double myDoubleNum = 9.98;   // Flotante
  char letrota = 'N';         // Caracter
  bool elbuliano = false;       // Booleano
  string cadena = "AEIOU";   // Cadena
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
   
  // Mostrar variables
  cout << cars[0] << "\n";
  cout << cars[1] << "\n";
  cout << "Entero: " << numerote << "\n";
  cout << "flotante: " << numeroteflotante << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "caracter: " << letrota<< "\n";
  cout << "booleano: " << elbuliano << "\n";
  cout << "cadena: " << cadena << "\n";
  
  return 0;
}
