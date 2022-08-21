#include <string>
#include <iostream>
#include "Lista2.h"
using namespace std;

class NodoEnlazado{
public:
    string Categoria;
    NodoEnlazado* siguiente;
    NodoEnlazado* atras;
    Lista2* Segunda;

public:
    NodoEnlazado();
};

NodoEnlazado::NodoEnlazado() {
    this->Categoria = "";
    this->siguiente = NULL;
    this->atras = NULL;
    this->Segunda = new Lista2();
}
