#include <iostream>
#include "string"

using namespace std;

class NodeUser
{
public:
    string nick;
    string pass;
    int moneda;
    int edad;
    NodeUser* siguiente;
    NodeUser* anterior;

public:
    NodeUser(string& nick, string& pass, int& moneda, int& edad);
    NodeUser();
};

NodeUser::NodeUser(string& nick, string& pass, int& moneda, int& edad)
{
    this->nick = nick;
    this->pass = pass;
    this->moneda = moneda;
    this->edad = edad;
    this->anterior = NULL;
    this->siguiente = NULL;
}


NodeUser::NodeUser(){
    this->nick = "";
    this->pass = "";
    this->moneda = 0;
    this->edad = 0;
    this->anterior = NULL;
    this->siguiente = NULL;
}