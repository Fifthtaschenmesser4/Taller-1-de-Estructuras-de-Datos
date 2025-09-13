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
    void crearAlumno(string nombre,string apellido,string carrera,string fechaingreso);
    void crearCurso(string nombre,int cantmaxima,string carrera, string profesor);

    void inscribirAlumnoCurso(int idAlumno,int idCurso);
    void eliminarAlumnoCurso(int idAlumno, int idCurso);


    void printAlumnosNombre(string nombre);
    void printAlumnoID(int id);
    void eliminarAlumnoSISTEMA(int id);

    void printCursosNombre(string nombre);
    void printCursoID(int id);
    void eliminarCursoSISTEMA(int id);

    bool obtenerCurso(int id);
    bool obtenerAlumno(int id);
    
    void eliminarAlumnoCurso(int idAlumno,int idCurso);
    void showAlumnos();
    void showCursos();
    void showAlumnos(Curso curso);
    void showCursos(Alumno alumno);
    void showCarrera(string carrera);
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
    void insertarCurso(Curso curso);
    void insertarAlumno(Alumno alumno);
};