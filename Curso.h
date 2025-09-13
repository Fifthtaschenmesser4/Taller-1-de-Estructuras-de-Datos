#pragma once
#include "Alumno.h"
#include "NodoAlumno.h"
#include "ListaAlumnos.h"
#include <string>
//Clase que funciona como lista enlazada de alumnos, con un puntero head.
//código único, nombre, cantidad máxima de estudiantes, carrera y nombre del profesor
class Curso{
    private:
    int id;
    string nombreCurso;
    int cantMaxima;
    string carreraCurso;
    string profesor;
    ListaAlumnos miembrosCurso;

    public:
    Curso(int,string,int,string,string);
    Curso();
    ~Curso(){};

    int getID();
    string getNombre();
    int getCantMax();
    string toString();
    void insertar(Alumno);
    void recorrerCurso();
    void eliminarAlumno(int);
    void autoEliminarse();
};
