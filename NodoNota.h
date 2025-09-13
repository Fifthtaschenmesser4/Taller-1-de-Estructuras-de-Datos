#pragma once
class NodoNota{
    private:
    int nota, idCurso;
    public:
    NodoNota(int idCurso, float nota);
    ~NodoNota(){}
    NodoNota* sigNota;
    int getIDCurso();
    float getNota();
};