#pragma once
#include "Alumno.h"
#include "Curso.h"
#include "NodoAlumno.h"
#include "NodoCurso.h"
#include "Universidad.h"
#include "ListaCursos.h"
#include "ListaAlumnos.h"

class Sistema{
    public:
    void crearAlumno(string,string,string,string);
    void crearCurso(string,int,string,string);
    void insertarCurso(Curso);
    void insertarAlumno(Alumno);

    string buscarCursoID(string);
    string buscarCursoNombre(string);
    void eliminarCursoID(string);

    string buscarAlumnoNombre(string);
    string buscarAlumnoID(string);
    void eliminarAlumnoID(string);

    void recorrerCursos();
    private:
    ListaCursos listaCursos;
    ListaAlumnos listaAlumnos;
};