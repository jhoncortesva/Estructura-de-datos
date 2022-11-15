#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <vector>
using namespace std;

struct Edge {
  int src, dest;
};


//Link compilador de Grafos: https://www.techiedelight.com/es/graph-implementation-using-stl/
class Graph
{
public:
  vector<vector<int>> adjList;

  Graph(vector<Edge> const &edges, int n)
  {
    adjList.resize(n);

    for (auto &edge: edges)
    {

      adjList[edge.src].push_back(edge.dest);
    }
  }
};

void printGraph(Graph const &graph, int n)
{
  for (int i=0; i < n; i++)
  {

    cout << i << "-->";

    for (int v: graph.adjList[i]){
      cout << v << " ";

    }
    cout << endl;
  }
}

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



  //Link al compilador de datos simples: https://www.w3schools.com/cpp/trycpp.asp?filename=demo_data_types
  int numerote = 5;               // Entero (todo el número)
  float numeroteflotante = 5.99;     // Flotante
  double myDoubleNum = 9.98;   // Flotante
  char letrota = 'N';         // Caracter
  bool elbuliano = true;       // Booleano
  string cadena = "AEIOU";   // Cadena
  //Link a las listas/arrays https://www.w3schools.com/cpp/trycpp.asp?filename=demo_array
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};


//Link al compilador pilas https://www.programiz.com/cpp-programming/online-compiler/?ref=32b96d2b
  stack<string> lenguajes;

  lenguajes.push("C++");
  lenguajes.push("Java");
  lenguajes.push("python");

//Link al compilador a la cola https://www.programiz.com/cpp-programming/online-compiler/?ref=3fc91718

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
  cout <<"Pila: " << lenguajes.top() << "\n";
 


  vector<Edge> edges=
  {
    {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
  };

  int n = 6;

  Graph graph(edges, n);

  printGraph(graph, n);

  cout << "Cola: ";
  
  while(!animales.empty()){
    cout << animales.front() << ", " << "\n";

    animales.pop();
  }

//Sacar capturas del código y resultado (no hay compilador online)

  cout << "preorder traversal: ";
  traversePreOrder(root);
  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);

  cout << endl;

  //
  
  return 0;
}
