#include "Sistema.h"
#include <iostream>
Sistema::Sistema(){
    listaCursos();
    listaAlumnos();
    idsAlumno = 0;
    idsCurso = 0;
}
int Sistema::nuevaIDalumno(){
    idsAlumno++;
    return idsAlumno;
}
int Sistema::nuevaIDcurso(){
    idsCurso++;
    return idsCurso;
}
void Sistema::crearAlumno(string nombre,string apellido,string carrera,string fecha){
    int id = nuevaIDalumno();
    Alumno nuevoAlumno(id,nombre,apellido,carrera,fecha);
    insertarAlumno(nuevoAlumno);
}
void Sistema::crearCurso(string nombre,int maximo,string carrera,string profesor){
    int id = nuevoIDcurso();
    Curso nuevoCurso(id,string,maximo,carrera,profesor);
    insertarCurso(nuevoCurso);
}
void Sistema::insertarCurso(Curso){
    
}
void Sistema::insertarAlumno(Alumno){

}

Curso Sistema::buscarCursoID(string){

}
Curso Sistema::buscarCursoNombre(string){

}
void Sistema::eliminarCursoID(string){

}

Alumno Sistema::buscarAlumnoNombre(string){

}
Alumno Sistema::buscarAlumnoID(string){

}
void Sistema::eliminarAlumnoID(string){

}

void Sistema::recorrerCursos(){

}