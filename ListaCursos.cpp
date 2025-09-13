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
    cout<<"Curso agregado con éxito"<<endl;
}

void ListaCursos::printInfosBusqueda(string nombre){
    bool found = false;
    NodoCurso* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay cursos registrados!"<<endl;
        return;
    }
    while(aux->sigCurso != nullptr){
        Curso cr = aux->getCurso();
        if(cr.getNombre()==nombre){
            found=true;
            cout<<cr.toString()<<endl;
        }
        aux = aux->sigCurso;
    }
    if(!found){
        cout<<"¡No existe ningún alumno con ese nombre!"<<endl;
    }
}

void ListaCursos::printInfosBusqueda(int id){
    NodoCurso* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay cursos registrados!"<<endl;
        return;
    }
    while(aux->sigCurso != nullptr){
        Curso cr = aux->getCurso();
        if(cr.getID() == id){
            cout<<cr.toString()<<endl;
            return;
        }
        aux = aux->sigCurso;
    }
    cout<<"No existe un curso con esa id!"<<endl;
}
//1. Eliminar un curso de un alumno. (Quitar el curso de la listaCursos de un alumno, y quitar alumno de la lista miembrosCurso del curso)
void ListaCursos::eliminarCursoDeAlumno(int id){
    NodoCurso* aux = head;
    if(aux==nullptr){ //si la lista está vacía
        return;
    }
    //hay al menos un elemento, y el primero es el buscado
    Curso cr = aux->getCurso();
    if(cr.getID() == id){
        head=aux->sigCurso;
        delete aux;
        return;
    }
    while(aux->sigCurso != nullptr){ //hay más de 1 elemento
        NodoCurso* next = aux->sigCurso;
        Curso cr = next->getCurso();
        if(cr.getID() == id){
            aux->sigCurso = next->sigCurso;
            delete next;
            return;
        }
        aux = next;
        next = next->sigCurso;
    }
    
}

void ListaCursos::printLista(){
    NodoCurso* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay cursos registrados!"<<endl;
        return;
    }
    while(aux->sigCurso != nullptr){
        Curso cr = aux->getCurso();
        cout<<cr.toString()<<endl;
        aux = aux->sigCurso;
    }
}

Curso* ListaCursos::obtenerCurso(int id){
    NodoCurso* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay cursos registrados!"<<endl;
        return;
    }
    while(aux->sigCurso != nullptr){
        Curso cr = aux->getCurso();
        if(cr.getID() == id){
            return &(aux->getCurso());
        }
        aux = aux->sigCurso;
    }
    cout<<"No existe un curso con esa id!"<<endl;
    return nullptr;
}