#pragma once
#include "Curso.h"
class NodoCurso{
    public:
    NodoCurso(Curso);
    ~NodoCurso(){};
    NodoCurso* sigCurso;
    Curso getCurso();
    private:
    Curso datoCurso;
};