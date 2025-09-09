#include "ListaCursos.h"
#include <iostream>

ListaCursos::ListaCursos(){
    head = nullptr;
}
void ListaCursos::insertarCurso(Curso curso){
    NodoCurso* nuevo = new NodoCurso(curso);
    NodoCurso* aux = head;
    if(aux==nullptr){
        head=nuevo;
    }
    while(aux->sigCurso != nullptr){
        aux = aux->sigCurso;
    }
    aux->sigCurso = nuevo;
}

Curso* ListaCursos::buscarCursoID(string){

}

Curso* ListaCursos::buscarCursoNombre(string){

}

void ListaCursos::eliminarAlumnoID(string){

}

void ListaCursos::recorrerCursos(){
    NodoCurso* aux = head;
    while(aux!=nullptr){
        cout<<aux->getCurso().toString()<<endl;
        aux = aux->sigCurso;
    }
}