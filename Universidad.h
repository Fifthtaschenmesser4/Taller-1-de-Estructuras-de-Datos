#include "Curso.h"
#include "NodoCurso.h"
#include <string>

//Clase que funciona como lista enlazada de cursos, con un puntero head.
class Universidad{
    public:
    Universidad();
    NodoCurso* headCursos;
    NodoAlumno* headAlumnos;

    void insertarCurso(NodoCurso);
    void insertarAlumno(NodoAlumno);

    Curso buscarCursoID(string);
    Curso buscarCursoNombre(string);
    void eliminarCursoID(string);

    Alumno buscarAlumnoNombre(string);
    Alumno buscarAlumnoID(string);
    void eliminarAlumnoID(string);

    void recorrerCursos();
};
