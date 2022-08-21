#include <iostream>
#include "string"

using namespace std;

class NodeUser
{
public:
    string nick;
    string pass;
    string moneda;
    string edad;
    NodeUser* siguiente;
    NodeUser* anterior;

public:
    NodeUser(string& nick, string& pass, string& moneda, string& edad);
    NodeUser();
};

NodeUser::NodeUser(string& nick, string& pass, string& moneda, string& edad)
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
    this->moneda = "";
    this->edad = "";
    this->anterior = NULL;
    this->siguiente = NULL;
}