#include <iostream>
#include "string"
#include "NodeMov.h"

using namespace std;

class ColaMov
{
public:
    NodeMov* cabeza;
public:
    ColaMov();
    void enqueque(int& x, int& y);
    NodeMov* dequeue();
    void dequeuee();
};

ColaMov::ColaMov()
{
    this->cabeza = NULL;
}

void ColaMov::enqueque(int& x, int& y)
{
    NodeMov* aux = new NodeMov(x, y);
    if (cabeza==NULL)
    {
        cabeza = aux;
    }else
    {
        NodeMov* aux2 = new NodeMov();
        aux2 = cabeza;
        while (aux2->siguiente!=NULL)
        {
            aux2 = aux2->siguiente;
        }
        aux2->siguiente = aux;
    }
}

NodeMov* ColaMov::dequeue(){
    NodeMov* aux = new NodeMov();
    aux = cabeza;
    cabeza = cabeza->siguiente;
    return aux;
}

void ColaMov::dequeuee(){
    NodeMov* aux = new NodeMov();
    aux = cabeza;

    while (aux!=NULL){
        cout<<aux->posx<<" , "<<
        aux->posy<<endl;

        aux = aux->siguiente;
        cabeza = aux;
    }    
}