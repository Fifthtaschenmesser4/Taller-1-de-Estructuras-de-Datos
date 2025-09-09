#include "ListaAlumnos.h"
#include "Alumno.h"
#include <iostream>

ListaAlumnos::ListaAlumnos(){
    head = nullptr;
}

void ListaAlumnos::insertarAlumno(Alumno alumno){
    NodoAlumno* nuevo = new NodoAlumno(alumno);
    NodoAlumno* aux = head;
    if(aux==nullptr){
        head=nuevo;
    }
    while(aux->sigAlumno != nullptr){
        aux = aux->sigAlumno;
    }
    aux->sigAlumno = nuevo;
}
Alumno* ListaAlumnos::buscarAlumnoNombre(string){

}
Alumno* ListaAlumnos::buscarAlumnoID(string){

}
void ListaAlumnos::eliminarAlumnoID(string){

}
void ListaAlumnos::recorrerAlumnos(){

}