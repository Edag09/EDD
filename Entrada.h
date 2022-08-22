#include <iostream>
#include "string"
#include "ListUser.h"
#include "ColaMov.h"
#include "Lista1.h"

ListUser* Usuarios = new ListUser();
Lista1* Tienda = new Lista1();
ColaMov* tutorial = new ColaMov();

void Agregar(string& Nick, string& pass, int& moneda, int& edad);

void Agregar(string& Nick, string& pass, int& moneda, int& edad){
    Usuarios->insertUser(Nick, pass, moneda, edad);
    cout<<"El usuario a sido registrado exitosamente ... "<<"\n"<<
    "Bienvenido \n"<<Nick<<endl;
}