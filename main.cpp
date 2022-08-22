#include <iostream>
#include "string"
#include "Entrada.h"

using namespace std;

int main(){
    bool menu1 = true;
    int eleccion;

    do
    {
        cout<<"***********************************"<<endl;
        cout<<"* 1. Carga Masiva                 *"<<endl;
        cout<<"* 2. Registrar Usuario            *"<<endl;
        cout<<"* 3. Login                        *"<<endl;
        cout<<"* 4. Reportes                     *"<<endl;
        cout<<"* 5. Salir                        *"<<endl;
        cout<<"***********************************"<<endl;
        cout<<"\n Ingrese una opcion: "; cin>>eleccion;
        string op;
        string Nick, Pass; int Moneda, Edad;

        switch (eleccion)
        {
        case 1:
            cout<<"Ingrese la ruta del archivo"<<endl;
            break;
        case 2: 
            cout<<"----- Registrar Usuario -----"<<endl;
            cout<<"Ingrese su Nickname: "<<endl;
            getline(cin>>ws, Nick);
            cout<<"Ingrese su Password: "<<endl;
            getline(cin>>ws, Pass);
            cout<<"Ingrese su cantidad de Monedas: "<<endl;
            cin>>Moneda;
            cout<<"Ingrese su Edad: "<<endl;
            cin>>Edad;
            Agregar(Nick, Pass, Moneda, Edad);
            break;
        case 3:
            cout<<"Login"<<endl;
            break;
        case 4:
            cout<<"Reportes"<<endl;
            break;
        case 5:
            cout<<"¿Esta seguro que desea salir del programa: Y o N?"<<endl;
            cin>>op;
            if (op=="Y")
            {
                menu1 = false;
            }
        default:
            break;
        }
    } while (menu1==true);
    
    return 0;
}