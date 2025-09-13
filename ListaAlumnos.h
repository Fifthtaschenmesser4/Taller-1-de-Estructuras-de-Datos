#pragma once
#include "NodoAlumno.h"
#include <string>
class ListaAlumnos{
    private:
    NodoAlumno* head;
    public:
    ListaAlumnos();
    ~ListaAlumnos(){};
    void insertarAlumno(Alumno alumno);
    Alumno* obtenerAlumno(int idAlumno);
    void printInfosBusqueda(string nombreAlumno);
    void printInfosBusqueda(int idAlumno);
    void eliminarAlumnoID(int idAlumno);
    void printLista();
    void printLista(string carrera);
    void cursoEliminarse(int idCurso);
};