#pragma once
#include "Curso.h"
class NodoCurso{
    public:
    NodoCurso(Curso curso);
    ~NodoCurso(){};
    NodoCurso* sigCurso;
    Curso getCurso();
    private:
    Curso datoCurso;
};