#include <string>
#include <iostream>
#include "Nodo2.h"
using namespace std;

class Lista2
{
private:
    int Id;
    NodoSegundo* primero;
public:
    Lista2();
    bool vacio();
    void InsertarNodo(int& id, string& Nombre, string& Precio, string& src);
};

Lista2::Lista2()
{
    this->primero = NULL;
}

bool Lista2::vacio(){
        if(primero==NULL){
        return true;
    } else{
        return false;
    }
}

void Lista2::InsertarNodo(int& id, string& Nombre, string& Precio, string& src){
    NodoSegundo* nuevo = new NodoSegundo();
    nuevo->Id = id;
    nuevo->Nombre = Nombre;
    nuevo->Precio = Precio;
    nuevo->src = src;
    if (primero==NULL)
    {
        primero = nuevo;
    }else
    {
        nuevo->siguiente = primero;
        primero = nuevo;
    }    
}
