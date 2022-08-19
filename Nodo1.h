#include <string>
#include <iostream>
#include "Lista2.h"
using namespace std;

class NodoEnlazado{
public:
    int Id;
    NodoEnlazado* siguiente;
    NodoEnlazado* atras;
    Lista2* Segunda;

public:
    NodoEnlazado();
};

NodoEnlazado::NodoEnlazado() {
    this->Id = 0;
    this->siguiente = NULL;
    this->atras = NULL;
    this->Segunda = new Lista2();
}
