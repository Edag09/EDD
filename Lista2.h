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
    void InsertarNodo(int& id);
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

void Lista2::InsertarNodo(int& id){
    NodoSegundo* nuevo = new NodoSegundo();
    nuevo->Id = id;
    if (primero==NULL)
    {
        primero = nuevo;
    }else
    {
        nuevo->siguiente = primero;
        primero = nuevo;
    }    
}
