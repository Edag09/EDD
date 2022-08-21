#include <iostream>
#include "string"
#include "ColaMov.h"

using namespace std;

int main(){
    ColaMov* nuevo = new  ColaMov();
    int x = 5;
    int y = 6;
    nuevo->enqueque(x, y);
    x = x + 1;
    y = y + 1;
    nuevo->enqueque(x, y);
    x = x + 1;
    y = y + 1;
    nuevo->enqueque(x, y);
    x = x + 1;
    y = y + 1;
    nuevo->enqueque(x, y);
    x = x + 1;
    y = y + 1;
    nuevo->enqueque(x, y);
    x = x + 1;
    y = y + 1;
    nuevo->enqueque(x, y);
    nuevo->dequeue();
    cout<<"------------------------------"<<endl;
    nuevo->dequeuee();
    cout<<"------------------------------"<<endl;
    if (nuevo->cabeza==NULL)
    {
        cout<<"vacio"<<endl;
    }else
    {
        cout<<nuevo->cabeza->posx<<endl;
    }
    return 0;
}