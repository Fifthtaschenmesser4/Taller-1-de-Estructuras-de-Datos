#pragma once
#include "NodoCurso.h"
#include <string>
class ListaCursos{
    private:
    NodoCurso* head;
    public:
    ListaCursos();
    ~ListaCursos(){};
    void insertarCurso(Curso curso);
    
    void printInfosBusqueda(string nombreCurso);
    void printInfosBusqueda(int idCurso);
    void eliminarCursoDeAlumno(int idCurso);
    Curso* obtenerCurso(int idCurso);
    void printLista();
};