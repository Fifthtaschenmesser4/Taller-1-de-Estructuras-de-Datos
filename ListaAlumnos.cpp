#include "ListaAlumnos.h"
#include <iostream>

ListaAlumnos::ListaAlumnos(){
    head = nullptr;
}

void ListaAlumnos::insertarAlumno(NodoAlumno* nodo){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        head=nodo;
    }
    while(aux->sigAlumno != nullptr){
        aux = aux->sigAlumno;
    }
    aux->sigAlumno = nodo;
}
Alumno* ListaAlumnos::buscarAlumnoNombre(string){

}
Alumno* ListaAlumnos::buscarAlumnoID(string){

}
void ListaAlumnos::eliminarAlumnoID(string){

}
void ListaAlumnos::recorrerAlumnos(){

}