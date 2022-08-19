#include <iostream>
#include "string"
#include "Lista1.h"

using namespace std;

int main(){
    Lista1* nueva = new Lista1();
    int size = 0;
    int sizetwo = 0;
    nueva->InsertarNodo(size);
    nueva->InsertarNodo(size);
    nueva->InsertarNodo(size);
    size = size + 1;
    nueva->InsertarNodo(size);
    nueva->InsertNodoSecond(size, sizetwo);
    //cout<<"Hola Mundo"<<endl;
    size = 0;
    nueva->InsertarNodo(size);

    nueva->Desplegar();
    return 0;
}