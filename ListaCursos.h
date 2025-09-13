#pragma once
#include "NodoCurso.h"
#include <string>
class ListaCursos{
    private:
    NodoCurso* head;
    public:
    ListaCursos();
    ~ListaCursos(){};
    void insertarCurso(Curso);
    
    void printInfosBusqueda(string);
    void printInfosBusqueda(int);
    void eliminarCursoDeAlumno(int);
    Curso* obtenerCurso(int);
    void printLista();
};