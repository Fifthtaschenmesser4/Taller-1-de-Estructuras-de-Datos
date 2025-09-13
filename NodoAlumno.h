#pragma once
#include "Alumno.h"
class NodoAlumno{
    public:
    NodoAlumno();
    NodoAlumno(Alumno);
    ~NodoAlumno(){};
    NodoAlumno* sigAlumno;
    Alumno getAlumno();
    private:
    Alumno datoAlumno;
};