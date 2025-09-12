#include "Alumno.h"
#include <iostream>

Alumno::Alumno(string nombre, string apellido, string carrera, string fechaIngreso){
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
string Alumno::getApellido(){
    return apellido;
}
string Alumno::getCarrera(){
    return carrera;
}
string Alumno::getFecha(){
    return fechaIngreso;
}
string Alumno::toString(){
    return nombre+" "+apellido+", "+carrera+", ingreso: "+fechaIngreso;
}
