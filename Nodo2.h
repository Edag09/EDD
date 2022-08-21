#include <string>
#include <iostream>
using namespace std;

class NodoSegundo{
public:
    int Id; //Identificador de Errores
    string Precio;
    string Nombre;
    string src;
    NodoSegundo* siguiente;
    NodoSegundo* atras;

public:
    NodoSegundo();
};

NodoSegundo::NodoSegundo() {
    this->Id = 0;
    this->Nombre = "";
    this->Precio = "";
    this->src = "";
    this->siguiente=NULL;
    this->atras=NULL;
}