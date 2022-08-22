#include <iostream>
#include "string"
#include "NodeUser.h"

using namespace std;

class ListUser
{
private:
    NodeUser* primero;
    NodeUser* ultimo;

public:
    ListUser();
    bool vacio();
    void insertUser(string& nick, string& pass, int& moneda, int& edad);
    void DisplayUser();
};

ListUser::ListUser()
{
    this->primero = NULL;
    this->ultimo = NULL;
}

bool ListUser::vacio(){
        if(primero==NULL){
        return true;
    } else{
        return false;
    }
}

void ListUser::insertUser(string& nick, string& pass, int& moneda, int& edad){
    NodeUser* User = new NodeUser(nick, pass, moneda, edad);

    if (vacio())
    {
        primero = User;
        ultimo = User;
        primero->siguiente = ultimo;
        ultimo->anterior = primero;
    }else
    {
        ultimo->siguiente = User;
        User->anterior = ultimo;
        User->siguiente = primero;
        ultimo = User;
        primero->anterior = ultimo;
    }
}

void ListUser::DisplayUser(){
    NodeUser* aux = new NodeUser();
    aux = primero;
    do
    {
        cout<<aux->nick<<endl;
        aux = aux->siguiente;
    } while (aux!=primero);
    
}