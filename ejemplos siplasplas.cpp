#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <stdlib.h>
using namespace std;

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// New node creation
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}

// Traverse Preorder
void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);
    traversePreOrder(temp->right);
  }
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

// Traverse Postorder
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

 
int main () {
  // Crear variables
   struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);


  int numerote = 5;               // Entero (todo el número)
  float numeroteflotante = 5.99;     // Flotante
  double myDoubleNum = 9.98;   // Flotante
  char letrota = 'N';         // Caracter
  bool elbuliano = false;       // Booleano
  string cadena = "AEIOU";   // Cadena
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

  stack<string> lenguajes;

  lenguajes.push("C++");
  lenguajes.push("Java");
  lenguajes.push("python");

  queue<string> animales;

  animales.push("Michi");
  animales.push("Perrito");


   
  // Mostrar variables
  cout << cars[0] << "\n";
  cout << cars[1] << "\n";
  cout << "Entero: " << numerote << "\n";
  cout << "flotante: " << numeroteflotante << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "caracter: " << letrota<< "\n";
  cout << "booleano: " << elbuliano << "\n";
  cout << "cadena: " << cadena << "\n";
  cout <<"lista: " << lenguajes.top() << "\n";
  cout << "Cola: ";

  
  
  while(!animales.empty()){
    cout << animales.front() << ", " << "\n";

    animales.pop();
  }

  cout << "preorder traversal: ";
  traversePreOrder(root);
  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);

  cout << endl;
  
  return 0;
}
