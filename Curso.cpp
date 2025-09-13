#include "Curso.h"
#include <iostream>

Curso::Curso(int id, string nombreCurso,int cantMaxima,string carreraCurso, string Profesor)
:miembrosCurso(){
    this -> id = id;
    this -> nombreCurso = nombreCurso;
    this -> cantMaxima = cantMaxima;
    this -> carreraCurso = carreraCurso;
    this -> profesor = profesor;
}

void Curso::insertar(Alumno nuevoAlumno){
    miembrosCurso.insertarAlumno(nuevoAlumno);
}

string Curso::toString(){
    return nombreCurso+", máximo estudiantes: "+to_string(cantMaxima)+", carrera: "+carreraCurso+", profe: "+profesor;
}

int Curso::getID(){
    return id;
}
string Curso::getNombre(){
    return nombreCurso;
}
int Curso::getCantMax(){
    return cantMaxima;
}

void Curso::recorrerCurso(){
   miembrosCurso.printLista();
}

void Curso::eliminarAlumno(int id){
    miembrosCurso.eliminarAlumnoID(id);
}

void Curso::autoEliminarse(){
    miembrosCurso.cursoEliminarse(id);
}