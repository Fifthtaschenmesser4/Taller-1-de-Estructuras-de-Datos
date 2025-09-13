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
void printMenu4(){
    cout<<"Manejo de notas"<<endl;
    cout<<"1. Registrar nota de alumno en una asignatura."<<endl;
    cout<<"2. Salir"<<endl;
    cout<<"Ingrese numero>> ";
}
void printMenu5(){
    cout<<"1. Ver alumnos de una carrera"<<endl;
    cout<<"2. Ver cursos de un alumno"<<endl;
    cout<<"3. Ver notas de un curso de un alumno"<<endl;
    cout<<"4. Ver promedio general de un alumno"<<endl;
    cout<<"5. Atrás"<<endl;
    cout<<"Ingrese numero>> ";
}
void iniciarMenu1(Sistema& systema){
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
            int id;
            cout<<"Ingrese la id del alumno a buscar: ";
            cin>>id;
            systema.printAlumnoID(id);
        } else if(opcion ==3){
            string nombre;
            cout<<"Ingrese el nombre del alumno a buscar: ";
            cin>>nombre;
            systema.printAlumnosNombre(nombre);
        } else if(opcion == 4){
            systema.showAlumnos();
            int id;
            cout<<"Ingrese la id del alumno a eliminar: ";
            cin>>id;
            systema.eliminarAlumnoSISTEMA(id);
        } else if(opcion == 5){
            cout<<"Saliendo del Manejo de Alumnos . . ."<<endl;
        } else {
            cout<<"Ingrese una opción válida."<<endl;
        }
    }while(opcion != 5);
}
void iniciarMenu2(Sistema& systema){
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
        } else if (opcion == 2){
            int id;
            cout<<"Ingrese la id del curso a buscar: ";
            cin>>id;
            systema.printCursoID(id);
        } else if(opcion == 3){
            string nombre;
            cout<<"Ingrese el nombre del curso a buscar: ";
            cin>>nombre;
            systema.printCursosNombre(nombre);
        } else if(opcion == 4){
            systema.showCursos();
            int id;
            cout<<"Ingrese la id del curso a eliminar: ";
            cin>>id;
            systema.eliminarCursoSISTEMA(id);
        } else if(opcion == 5){
            cout<<"Saliendo del Manejo de Cursos . . ."<<endl;
        } else {
            cout<<"Ingrese una opción válida."<<endl;
        }
    }while(opcion != 5);
}
void iniciarMenu3(Sistema& systema){
    int opcion;
    cout<<"----- Menú de Manejo de Inscripciones -----"<<endl;
    do{
        printMenu3();
        cin>>opcion;
        if(opcion == 1){
            int idAlumno, idCurso;
            cout<<"Inscripción de alumno"<<endl;
            systema.showAlumnos();
            cout<<"Ingrese id del alumno a inscribir: ";
            cin>>idAlumno;
            systema.showCursos();
            cout<<"Ingrese id del curso donde quiere inscribir al alumno: ";
            cin>>idCurso;
            systema.inscribirAlumnoCurso(idAlumno,idCurso);

        } else if (opcion == 2){

            int idAlumno, idCurso;
            cout<<"Ingrese id del curso donde quiere dar de bajar al alumno: ";
            systema.showCursos();
            cin>>idCurso;
            bool exists = systema.obtenerCurso(idCurso);
            if(exists){
                cout<<"Ingrese id del alumno a eliminar del curso: ";
                cin>>idAlumno;
                systema.eliminarAlumnoCurso(idAlumno,idCurso);

            }
            systema.inscribirAlumnoCurso(idAlumno,idCurso);
        } else if (opcion == 3){
            cout<<"Regresando a menú principal"<<endl;
        } else {
            cout<<"Ingrese una opción válida"<<endl;;
        }
       
    }while(opcion != 3);
}
void iniciarMenu4(Sistema& systema){
int opcion;
    cout<<"----- Menú de Manejo de Notas -----"<<endl;
    do{
        printMenu4();
        cin>>opcion;
        if(opcion == 1){
            int idAlumno, idCurso;
            cout<<"Registrar nota"<<endl;
            systema.showAlumnos();
            cout<<"Ingrese id del alumno: ";
            cin>>idAlumno;
            bool exist = systema.obtenerAlumno(idAlumno);
            if(exist){
                cout<<"Elija un curso para agregar nota: ";
                cin>>idCurso;
                float nota;
                cout<<"Elija la nota a agregar (Formato chileno, EJ:  5.2): ";
                cin>>nota;
                systema.agregarNota(idAlumno,idCurso,nota);
            }
        } else if (opcion == 2){
            cout<<"Regresando a menú principal"<<endl;
        } else {
            cout<<"Ingrese una opción válida"<<endl;
        }
       
    }while(opcion != 2);
}
void iniciarMenu5(Sistema& systema){
    int opcion;
    cout<<"----- Menú de Manejo de Consultas y Reportes -----"<<endl;
    do{
        printMenu5();
        cin>>opcion;
        if(opcion == 1){
            string carrera;
            cout<<"Ingrese una carrera para ver sus alumnos: ";
            cin>>carrera;
            systema.showCarrera(carrera);
        } else if (opcion == 2){
            int idAlumno;
            systema.showAlumnos();
            cout<<"Ingrese una id: ";
            cin>>idAlumno;
            bool exist = systema.obtenerAlumno(idAlumno);
            if(exist){
                systema.showCursos(idAlumno);
            }
        } else if (opcion == 3){
            int idAlumno, idCurso;
            systema.showAlumnos();
            cout<<"Ingrese una id: ";
            cin>>idAlumno;
            bool exist = systema.obtenerAlumno(idAlumno);
            if(exist){
                systema.showCursos(idAlumno);
                cout<<"Ingrese una id de curso: ";
                cin>>idCurso;
                systema.calcularPromedioCurso(idAlumno,idCurso);
            }
        } else if (opcion==4) {
            int idAlumno;
            systema.showAlumnos();
            cout<<"Ingrese una id: ";
            cin>>idAlumno;
            bool exist = systema.obtenerAlumno(idAlumno);
            if(exist){
                systema.calcularPromedioGeneral(idAlumno);
            }
        } else if (opcion == 5){
            cout<<"Volviendo al menú"<<endl;
        } else {
            cout<<"Ingrese una opción válida"<<endl;
        }
    }while(opcion != 5);
}
void iniciarPrograma(Sistema& systema){
    int opcion;
    cout<<"¡Bienvenido a la gestiones de la Universidad!"<<endl;
    do{
    printMenu0();
    cin>>opcion;
    switch(opcion){
        case 1:
        iniciarMenu1(systema);
        break;
        case 2:
        iniciarMenu2(systema);
        break;
        case 3:
        iniciarMenu3(systema);
        break;
        case 4:
        iniciarMenu4(systema);
        break;
        case 5:
        iniciarMenu5(systema);
        break;
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
