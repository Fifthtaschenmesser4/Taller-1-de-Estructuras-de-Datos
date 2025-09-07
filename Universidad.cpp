#include "Universidad.h"
#include <iostream>

Universidad::Universidad(){
    headAlumnos = nullptr;
    headCursos = nullptr;
}
void Universidad::insertarCurso(Curso curso){
    NodoCurso* nuevoNodo = new NodoCurso(curso);
    if(headCursos==nullptr){
        headCursos=nuevoNodo;
        return;
    }
    NodoCurso* aux = headCursos;
    while(aux->sigCurso!=nullptr){
        aux=aux->sigCurso;
    }
    aux->sigCurso=nuevoNodo;
    return;
}

void Universidad::recorrerCursos(){
    NodoCurso* aux = headCursos;
    while(aux!=nullptr){
        cout<<aux->getCurso().toString()<<endl;
        aux = aux->sigCurso;
    }
}
