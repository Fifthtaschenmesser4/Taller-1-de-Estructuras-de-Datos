#include <iostream>
using namespace std;

void printMenu(){
    cout<<"¡Bienvenido a la gestiones de la Universidad!"<<endl;
    cout<<"1. Manejo de Alumnos"<<endl;
    cout<<"2. Manejo de Cursos"<<endl;
    cout<<"3. Manejo de Inscripciones"<<endl;
    cout<<"4. Manejo de Notas"<<endl;
    cout<<"5. Consultas y Reportes"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Ingrese número>> ";
}

int main(){
    while(true){
    printMenu();
    int opcion;
    cin>>opcion;
    while(opcion>6 || opcion<1){
        cout<<"\nIngrese opción válida>> ";
        cin>>opcion;
    }
    switch(opcion){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
    }
}
}