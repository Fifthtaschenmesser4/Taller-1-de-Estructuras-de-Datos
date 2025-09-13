#include "NodoNota.h"

NodoNota::NodoNota(int idCurso, float nota){
    this -> nota = nota;
    this -> idCurso = idCurso;
    sigNota = nullptr;
}

int NodoNota::getIDCurso(){
    return idCurso;
}
float NodoNota::getNota(){
    return nota;
}