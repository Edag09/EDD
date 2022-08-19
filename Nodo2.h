#include <string>
#include <iostream>
using namespace std;

class NodoSegundo{
public:
    int Id; //Identificador de Errores
    NodoSegundo* siguiente;
    NodoSegundo* atras;

public:
    NodoSegundo();
};

NodoSegundo::NodoSegundo() {
    this->Id = 0;
    this->siguiente=NULL;
    this->atras=NULL;
}