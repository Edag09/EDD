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
    void InsertarNodo(string& id);
    void InsertNodoSecond(string& id1, int& id2, string& Nombre, string& Precio, string& src);
    bool Validar(string& id);
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

void Lista1::InsertarNodo(string& id){
    NodoEnlazado* nuevo = new NodoEnlazado();
    nuevo->Categoria = id;
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

void Lista1::InsertNodoSecond(string& id1, int& id2, string& Nombre, string& Precio, string& src){
    NodoEnlazado* auxiliar = new NodoEnlazado();
    auxiliar = primero;
    //cout<<"Hola "<<endl;
    while (auxiliar!=NULL)
    {
        if (auxiliar->Categoria!=id1)
        {
            auxiliar = auxiliar->siguiente;
        }else
        {
            auxiliar->Segunda->InsertarNodo(id2, Nombre, Precio, src);
            break;
        }   
    }
}

bool Lista1::Validar(string& id){
    NodoEnlazado* auxiliar = new NodoEnlazado();
    auxiliar = primero;
    while (auxiliar!=NULL)
    {
        if (auxiliar->Categoria!=id)
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
        cout<<auxiliar->Categoria<<endl;
        auxiliar = auxiliar->siguiente;
    }
}