#pragma once
#include "NodoNota.h"
class ListaNotas{
    private:
    NodoNota* head;

    public:
    ListaNotas();
    ~ListaNotas(){}
    void agregarNota(int idCurso, float nota);
    float obtenerPromedioCurso(int idCurso);
    float obtenerPromedioGeneral();
};