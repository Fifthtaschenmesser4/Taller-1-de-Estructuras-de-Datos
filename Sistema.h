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
    Sistema();
    void crearAlumno(string,string,string,string);
    void crearCurso(string,int,string,string);

    Curso buscarCursoID(string);
    Curso buscarCursoNombre(string);
    void eliminarCursoID(string);

    Alumno buscarAlumnoNombre(string);
    Alumno buscarAlumnoID(string);
    void eliminarAlumnoID(string);
    void recorrerAlumnos();
    void recorrerCursos();
    private:
    ListaCursos listaCursos;
    ListaAlumnos listaAlumnos;
    int idsAlumno;
    int idsCurso;
    int nuevaIDalumno();
    int nuevaIDcurso();
    void insertarCurso(Curso);
    void insertarAlumno(Alumno);
};