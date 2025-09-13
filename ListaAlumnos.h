#pragma once
#include "NodoAlumno.h"
#include <string>
class ListaAlumnos{
    private:
    NodoAlumno* head;
    public:
    ListaAlumnos();
    ~ListaAlumnos(){};
    void insertarAlumno(Alumno);
    Alumno* obtenerAlumno(int);
    void printInfosBusqueda(string);
    void printInfosBusqueda(int);
    void eliminarAlumnoID(int);
    void printLista();
    void printLista(string carrera);
    void cursoEliminarse(int idCurso);
};