#pragma once
#include "NodoCurso.h"

class ListaCursos{
    private:
    NodoCurso* head;
    public:
    ListaCursos();
    ~ListaCursos(){};
    void insertarCurso(Curso);
    Curso* buscarCursoID(string);
    Curso* buscarCursoNombre(string);
    void eliminarAlumnoID(string);
    void recorrerCursos();
};