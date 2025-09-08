#include "ListaCursos.h"
#include <iostream>

ListaCursos::ListaCursos(){
    head = nullptr;
}
void ListaCursos::insertarCurso(NodoCurso* nodo){
    NodoCurso* aux = head;
    if(aux==nullptr){
        head=nodo;
    }
    while(aux->sigCurso != nullptr){
        aux = aux->sigCurso;
    }
    aux->sigCurso = nodo;
}

Curso* ListaCursos::buscarCursoID(string){

}

Curso* ListaCursos::buscarCursoNombre(string){

}

void ListaCursos::eliminarAlumnoID(string){

}

void ListaCursos::recorrerCursos(){

}