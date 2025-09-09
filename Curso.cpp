#include "Curso.h"
#include <iostream>

Curso::Curso(string nombreCurso,int cantMaxima,string carreraCurso, string Profesor){
    this -> nombreCurso = nombreCurso;
    this -> cantMaxima = cantMaxima;
    this -> carreraCurso = carreraCurso;
    this -> profesor = profesor;
    head = nullptr;
}

void Curso::insertar(Alumno nuevoAlumno){
    NodoAlumno* nuevo = new NodoAlumno(nuevoAlumno);
    //***METODO AGREGAR PUNTERO DE ESTE NODO A UNA LISTA EN ALUMNO
    NodoAlumno* aux = head;
    if(aux==nullptr){
        head=nuevo;
    }
    while(aux->sigAlumno != nullptr){
        aux = aux->sigAlumno;
    }
    aux->sigAlumno = nuevo;
    return;
}

string Curso::toString(){
    return nombreCurso+", máximo estudiantes: "+to_string(cantMaxima)+", carrera: "+carreraCurso+", profe: "+profesor;
}

void Curso::recorrerCurso(){
    NodoAlumno* aux = head;
    while(aux!=nullptr){
        cout<<aux->getAlumno().toString()<<endl;
        aux = aux->sigAlumno;
    }
}