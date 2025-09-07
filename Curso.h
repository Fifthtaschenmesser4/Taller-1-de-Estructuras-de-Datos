#pragma once
#include "Alumno.h"
#include "NodoAlumno.h"
//Clase que funciona como lista enlazada de alumnos, con un puntero head.
//código único, nombre, cantidad máxima de estudiantes, carrera y nombre del profesor
class Curso{
    private:
    string id;
    string nombreCurso;
    int cantMaxima;
    string carreraCurso;
    string profesor;

    public:
    Curso(string,int,string,string);
    NodoAlumno* head;

    string getID();
    string getNombre();
    int getCantMax();
    string getCarrera();
    string getProfesor();
    void toString();

    void insertar(NodoAlumno);
    void buscar(string);
};