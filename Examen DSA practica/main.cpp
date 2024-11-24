#include <iostream>
#include "iventory.h"
#include "History.h"
using namespace std;
int main(){
    Inventory inventory;
    History history;
    string name = "audifonos";
    int choice;
    do {
        cout<<"Inventario 2024"<<endl;
        cout <<"1. Agregar Producto: "<<endl;
        cout<<"5. Salir del Inventario"<<endl;
        cin>>choice;
        string nombre;
    switch(choice){
        case 1:
            cout<<"Nombre del Producto:"<<endl;
            cin><nombre;
            cout<<"cantidad: "<<endl;
            cin>>cantidad;
            inventory.addProduct(nombre, cantidad);
    break;
        case 5:
            cout<<"saliendo del incentario"<<endl;
    break;
    }while(choice != 5);
    inventory.addProduct(name, 10);
    inventory.getProduct(name);
    return 0;
}
