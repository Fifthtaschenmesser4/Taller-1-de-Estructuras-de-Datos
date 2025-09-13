#pragma once
#include "Alumno.h"
#include "Curso.h"
#include "NodoAlumno.h"
#include "NodoCurso.h"
#include "ListaCursos.h"
#include "ListaAlumnos.h"
#include <string>
class Sistema{
    public:
    Sistema();
    void crearAlumno(string,string,string,string);
    void crearCurso(string,int,string,string);

    void inscribirAlumnoCurso(int,int);
    void eliminarAlumnoCurso();
    void registrarNota(int);


    void printAlumnosNombre(string);
    void printAlumnoID(int);
    void eliminarAlumnoSISTEMA(int);

    void printCursosNombre(string);
    void printCursoID(int);
    void eliminarCursoSISTEMA(int);

    bool obtenerCurso(int);
    bool obtenerAlumno(int);
    
    void eliminarAlumnoCurso(int,int);
    void showAlumnos();
    void showCursos();
    void showAlumnos(Curso);
    void showCursos(Alumno);
    void showCarrera(string);
    void showCursos(int idAlumno);
    void calcularPromedioCurso(int idAlumno, int idCurso);
    void calcularPromedioGeneral(int idAlumno);
    bool agregarNota(int idAlumno, int idCurso, float nota);

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