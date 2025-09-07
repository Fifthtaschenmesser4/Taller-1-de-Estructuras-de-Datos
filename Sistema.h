#pragma once
#include "Alumno.h"
#include "Curso.h"
#include "NodoAlumno.h"
#include "NodoCurso.h"
#include "Universidad.h"

class Sistema{
    public:
    Universidad getInstance();
    crearAlumno(string,string,string,string);
    crearCurso(string,int,string,string);
    private:
    Universidad();
    Universidad universidad;
};