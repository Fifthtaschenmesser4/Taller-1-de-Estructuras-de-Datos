#pragma once
#include "NodoAlumno.h"

class ListaAlumnos{
    private:
    NodoAlumno* head;
    public:
    ListaAlumnos();
    ~ListaAlumnos(){};
    void insertarAlumno(NodoAlumno);
    Alumno* buscarAlumnoNombre(string);
    Alumno* buscarAlumnoID(string);
    void eliminarAlumnoID(string);
    void recorrerAlumnos();
};