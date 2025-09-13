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
        return;
    }
    while(aux->sigAlumno != nullptr){
        if(aux->getAlumno().getID()==alumno.getID()){ //si ya está registrado
            cout<<"El alumno ya está registrado, cancelando operación..."<<endl;
            return;
        }
        aux = aux->sigAlumno;
    }
    aux->sigAlumno = nuevo;
    cout<<"Alumno agregado con éxito"<<endl;
}
void ListaAlumnos::printInfosBusqueda(string nombre){
    bool found = false;
    NodoAlumno* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        if(al.getNombre()==nombre){
            found = true;
            cout<<al.toString()<<endl;
        }
        aux = aux->sigAlumno;
    }
    if(!found){
        cout<<"¡No existe ningún alumno con ese nombre!"<<endl;
    }
}
void ListaAlumnos::printInfosBusqueda(int id){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        if(al.getID()==id){
            cout<<al.toString()<<endl;
            return;
        }
        aux = aux->sigAlumno;
    }
    cout<<"¡No existe ningún alumno con esa id!"<<endl;
}
void ListaAlumnos::eliminarAlumnoID(int id){
        NodoAlumno* aux = head;
    if(aux==nullptr){ //si la lista está vacía
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    //hay al menos un elemento, y el primero es el buscado
    Alumno al = aux->getAlumno();
    if(al.getID() == id){
        head=aux->sigAlumno;
        delete aux;
        cout<<"Eliminado con éxito!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){ //hay más de 1 elemento
        NodoAlumno* next = aux->sigAlumno;
        Alumno al = next->getAlumno();
        if(al.getID() == id){
            aux->sigAlumno = next->sigAlumno;
            delete next;
            cout<<"Eliminado con éxito!"<<endl;
            return;
        }
        aux = next;
        next = next->sigAlumno;
    }
    cout<<"No existe un alumno con ese ID!"<<endl;
}

void ListaAlumnos::printLista(){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        cout<<al.toString()<<endl;
        aux = aux->sigAlumno;
    }
}
Alumno* ListaAlumnos::obtenerAlumno(int id){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        if(al.getID()==id){
            return &(aux->getAlumno());
        }
        aux = aux->sigAlumno;
    }
    cout<<"¡No existe ningún alumno con esa id!"<<endl;
    return nullptr;
}

void ListaAlumnos::printLista(string carrera){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        cout<<"¡No hay alumnos registrados!"<<endl;
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        if(al.getCarrera()==carrera){
            cout<<al.toString()<<endl;
        }
        aux = aux->sigAlumno;
    }
}

void ListaAlumnos::cursoEliminarse(int idCurso){
    NodoAlumno* aux = head;
    if(aux==nullptr){
        return;
    }
    while(aux->sigAlumno != nullptr){
        Alumno al = aux->getAlumno();
        al.eliminarCurso(idCurso);
        aux = aux->sigAlumno;
    }
}