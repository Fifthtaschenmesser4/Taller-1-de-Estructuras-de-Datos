#pragma once
#include "ListaCursos.h"
#include "ListaNotas.h"
#include <string>
using namespace std;
//identificador único, nombre, apellido, carrera y fecha de ingreso
class Alumno{
    private:
    int id;
    string nombre, apellido, carrera, fechaIngreso;
    ListaCursos cursosAlumno;  
    ListaNotas notasAlumno; 
    public:
    Alumno(int id,string nombre,string apellido,string carrera,string fechaIngreso);
    Alumno();
    int getID();
    string getNombre();
    string getApellido();
    string getCarrera();
    string getFecha();
    string toString();
    void recorrerCursos();
    bool agregarNota(int idCurso, float nota);
    float obtenerPromedioCurso(int idCurso);
    float obtenerPromedioGeneral();
    void eliminarCurso(int idCurso);
};