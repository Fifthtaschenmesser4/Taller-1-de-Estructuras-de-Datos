#include "Curso.h"
#include <iostream>

Curso::Curso(string nombreCurso,int cantMaxima,string carreraCurso, string Profesor){
    this -> nombreCurso = nombreCurso;
    this -> cantMaxima = cantMaxima;
    this -> carreraCurso = carreraCurso;
    this -> profesor = profesor;
    head = nullptr;
}

void Curso::insertar(Alumno nuevoAlumno){

    return;
}

void Curso::toString(){
    cout<<nombreCurso<<", máximo estudiantes: "<<cantMaxima<<", carrera: "<<carreraCurso<<", profe: "<<profesor<<endl;
}