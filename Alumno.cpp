#include "Alumno.h"
#include <iostream>

Alumno::Alumno(int id, string nombre, string apellido, string carrera, string fechaIngreso)
: cursosAlumno(){
    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> carrera= carrera;
    this -> fechaIngreso = fechaIngreso;
}

int Alumno::getID(){
    return id;
}
string Alumno::getNombre(){
    return nombre;
}
string Alumno::getCarrera(){
    return carrera;
}

string Alumno::toString(){
    return nombre+" "+apellido+", "+carrera+", ingreso: "+fechaIngreso;
}
void Alumno::recorrerCursos(){
    cursosAlumno.printLista();
}

bool Alumno::agregarNota(int idCurso, float nota){
    notasAlumno.agregarNota(idCurso,nota);
}

float Alumno::obtenerPromedioCurso(int idCurso){
    float prom = notasAlumno.obtenerPromedioCurso(idCurso);
    return prom;
}

float Alumno::obtenerPromedioGeneral(){
    float prom = notasAlumno.obtenerPromedioGeneral();
    return prom;
}

void Alumno::eliminarCurso(int idCurso){
    cursosAlumno.eliminarCursoDeAlumno(idCurso);
}