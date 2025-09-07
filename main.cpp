#include <iostream>
using namespace std;

void printMenu0(){
    cout<<"1. Manejo de Alumnos"<<endl;
    cout<<"2. Manejo de Cursos"<<endl;
    cout<<"3. Manejo de Inscripciones"<<endl;
    cout<<"4. Registrar Notas"<<endl;
    cout<<"5. Consultas y Reportes"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Ingrese numero>> ";
}
void printMenu1(){
    cout<<"1. Crear alumno"<<endl;
    cout<<"2. Buscar un alumno por ID"<<endl;
    cout<<"3. Buscar un alumno por nombre"<<endl;
    cout<<"4. Eliminar alumno por ID"<<endl;
    cout<<"5. Atrás"<<endl;
    cout<<"Ingrese numero>> ";
}
void printMenu2(){
    cout<<"1. Crear curso"<<endl;
    cout<<"2. Buscar un curso por ID"<<endl;
    cout<<"3. Buscar un curso por nombre"<<endl;
    cout<<"4. Eliminar curso por ID"<<endl;
    cout<<"5. Atrás"<<endl;
    cout<<"Ingrese numero>> ";
}
void printMenu3(){
    cout<<"1. Inscribir alumno a un curso"<<endl;
    cout<<"2. Eliminar alumno de un curso"<<endl;
    cout<<"3. Atrás"<<endl;
    cout<<"Ingrese numero>> ";
}

void printMenu5(){
    cout<<"1. Ver alumnos por carrera"<<endl;
    cout<<"2. Ver cursos de un alumno"<<endl;
    cout<<"3. Ver notas de un alumno"<<endl;
    cout<<"4. Atrás"<<endl;
    cout<<"Ingrese numero>> ";
}

void iniciarPrograma(Sistema systema){
     int opcion;
    cout<<"¡Bienvenido a la gestiones de la Universidad!"<<endl;
    do{
    printMenu0();
    cin>>opcion;
    switch(opcion){
        case 1:

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout<<"Terminando programa . . .";
            break;
        default:
            cout<<"Ingrese una opcion valida"<<endl;

    }
    } while(opcion!=6);
}

int main(){
   Sistema systema;
   iniciarPrograma(Sistema);
}
