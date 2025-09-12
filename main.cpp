#include "Sistema.h"
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
void iniciarMenu1(Sistema systema){
    int opcion;
    cout<<"----- Menú de Manejo de Alumnos -----"<<endl;
    do{
        printMenu1();
        cin>>opcion;
        if(opcion == 1){
            string nombre, apellido, carrera, fecha;
            cout<<"Nuevo alumno"<<endl;
            cout<<"Ingrese nombre: ";
            cin>>nombre;
            cout<<"Ingrese apellido: ";
            cin>>apellido;
            cout<<"Ingrese carrera: ";
            cin>>carrera;
            cout<<"Ingrese fecha: ";
            cin>>fecha;
            systema.crearAlumno(nombre,apellido,carrera,fecha);
            cout<<"¡Alumno creado con éxito!"<<endl;
        } else if (opcion == 2){
            string id;
            cout<<"Ingrese la id del alumno a buscar: ";
            cin>>id;
            string alumno = systema.buscarAlumnoID(id);
            if(alumno != ""){
                cout<<alumno<<endl;
            } else {
                cout<<"¡No existe alumno con ese ID!";
            }
        } else if(opcion ==3){
            string nombre;
            cout<<"Ingrese el nombre del alumno a buscar: ";
            cin>>nombre;
            string alumno = systema.buscarAlumnoNombre(nombre);
            if(alumno != ""){
                cout<<alumno<<endl;
            } else {
                cout<<"¡No existe alumno con ese ID!";
            }
        } else if(opcion == 4){
            string id;
            cout<<"Ingrese la id del alumno a eliminar: ";
            cin>>id;
            string alumno = systema.buscarAlumnoID(id);
            if(alumno != ""){
                systema.eliminarAlumnoID(id);
            } else {
                cout<<"¡No existe alumno con ese ID!";
            }
        } else if(opcion == 5){
            cout<<"Saliendo del Manejo de Alumnos . . ."<<endl;
        } else {
            cout<<"Ingrese una opción válida."<<endl;
        }
    }while(opcion != 5);
}
void iniciarMenu2(Sistema systema){
    int opcion;
    cout<<"----- Menú de Manejo de Cursos -----"<<endl;
    do{
        printMenu1();
        cin>>opcion;
        if(opcion == 1){
            string nombre, carrera, profesor;
            int maximoAlumnos;
            cout<<"Nuevo curso"<<endl;
            cout<<"Ingrese nombre del curso: ";
            cin>>nombre;
            cout<<"Ingrese cantidad máxima de estudiantes: ";
            cin>>maximoAlumnos;
            cout<<"Ingrese carrera: ";
            cin>>carrera;
            cout<<"Ingrese nombre del profesor: ";
            cin>>profesor;
            systema.crearCurso(nombre,maximoAlumnos,carrera,profesor);
            cout<<"¡Curso creado con éxito!"<<endl;
        } else if (opcion == 2){
            string id;
            cout<<"Ingrese la id del curso a buscar: ";
            cin>>id;
            string curso = systema.buscarCursoID(id);
            if(curso != ""){
                cout<<curso<<endl;
            } else {
                cout<<"¡No existe curso con ese ID!";
            }
        } else if(opcion ==3){
            string nombre;
            cout<<"Ingrese el nombre del curso a buscar: ";
            cin>>nombre;
            string curso = systema.buscarCursoNombre(nombre);
            if(curso != ""){
                cout<<curso<<endl;
            } else {
                cout<<"¡No existe curso con ese ID!";
            }
        } else if(opcion == 4){
            string id;
            cout<<"Ingrese la id del curso a eliminar: ";
            cin>>id;
            string curso = systema.buscarCursoID(id);
            if(curso != ""){
                systema.eliminarAlumnoID(id);
            } else {
                cout<<"¡No existe curso con ese ID!";
            }
        } else if(opcion == 5){
            cout<<"Saliendo del Manejo de Cursos . . ."<<endl;
        } else {
            cout<<"Ingrese una opción válida."<<endl;
        }
    }while(opcion != 5);
}
void iniciarMenu3(Sistema systema){
    int opcion;
    cout<<"----- Menú de Manejo de Inscripciones -----"<<endl;
    do{
        printMenu3();
        cin>>opcion;
        if(opcion == 1){
            string idAlumno, idCurso;
            cout<<"Inscripción de alumno"<<endl;
            systema.recorrerAlumnos();
            cout<<"Ingrese id del alumno a inscribir: ";
            cin>>idAlumno;
            
            systema.recorrerCursos();
            cout<<"Ingrese id del curso"
        } else if (opcion == 2){
        }
       
    }while(opcion != 5);
}

void iniciarPrograma(Sistema systema){
    int opcion;
    cout<<"¡Bienvenido a la gestiones de la Universidad!"<<endl;
    do{
    printMenu0();
    cin>>opcion;
    switch(opcion){
        case 1:
        iniciarMenu1(systema);
        case 2:
        iniciarMenu2(systema);
        case 3:
        iniciarMenu3(systema);
        case 4:
        iniciarMenu4(systema);
        case 5:
        iniciarMenu5(systema);
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
   iniciarPrograma(systema);
}
