#pragma once
#include "Alumno.h"
class NodoAlumno{
    public:
    NodoAlumno();
    NodoAlumno(Alumno alumno);
    ~NodoAlumno(){};
    NodoAlumno* sigAlumno;
    Alumno getAlumno();
    private:
    Alumno datoAlumno;
};