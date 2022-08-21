#include <iostream>
#include "string"

class NodeMov
{
public:
    int posx;
    int posy;
    NodeMov* siguiente;
public:
    NodeMov(int& posx, int& posy);
    NodeMov();
};

NodeMov::NodeMov(int& posx, int& posy)
{
    this->posx = posx;
    this->posy = posy;
    this->siguiente = NULL;
}


NodeMov::NodeMov()
{
    this->posx = 0;
    this->posy = 0;
    this->siguiente = NULL;
}
