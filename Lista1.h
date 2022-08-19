#include <iostream>
#include <iostream>
using namespace std;
#include "Nodo1.h"

class Lista1
{
private:
    NodoEnlazado* primero;
    
public:
    Lista1();
    bool vacio();
    void InsertarNodo(int& id);
    void InsertNodoSecond(int& id1, int& id2);
    bool Validar(int& id);
    void Desplegar();
};

Lista1::Lista1(){
    this->primero = NULL;
}

bool Lista1::vacio(){
        if(primero==NULL){
        return true;
    } else{
        return false;
    }
}

void Lista1::InsertarNodo(int& id){
    NodoEnlazado* nuevo = new NodoEnlazado();
    nuevo->Id = id;
    if (primero==NULL)
    {
        primero = nuevo;
    }else
    {
        if (Validar(id)!=true)
        {
            //cout<<"Hola "<<endl;
            nuevo->siguiente = primero;
            primero = nuevo;   
        }
    }    
}

void Lista1::InsertNodoSecond(int& id1, int& id2){
    NodoEnlazado* auxiliar = new NodoEnlazado();
    auxiliar = primero;
    //cout<<"Hola "<<endl;
    while (auxiliar!=NULL)
    {
        if (auxiliar->Id!=id1)
        {
            auxiliar = auxiliar->siguiente;
        }else
        {
            auxiliar->Segunda->InsertarNodo(id2);
            break;
        }   
    }
}

bool Lista1::Validar(int& id){
    NodoEnlazado* auxiliar = new NodoEnlazado();
    auxiliar = primero;
    while (auxiliar!=NULL)
    {
        if (auxiliar->Id!=id)
        {
            auxiliar = auxiliar->siguiente;
        }else
        {
            return true;
        }  
    }
    return false;
}

void Lista1::Desplegar(){
    NodoEnlazado* auxiliar = new NodoEnlazado();
    auxiliar = primero;
    while(auxiliar!=NULL){
        cout<<auxiliar->Id<<endl;
        auxiliar = auxiliar->siguiente;
    }
}