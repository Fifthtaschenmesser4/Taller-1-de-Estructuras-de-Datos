#include "ListaNotas.h"
#include <iostream>

ListaNotas::ListaNotas(){
    head = nullptr;
}

void ListaNotas::agregarNota(int idCurso, float nota){
    NodoNota* nuevaNota = new NodoNota(idCurso,nota);
    NodoNota* aux = head;
    if(aux == nullptr){
        head = nuevaNota;
        return;
    }
    while(aux->sigNota != nullptr){
        aux = aux->sigNota;
    }
    aux->sigNota = nuevaNota;
}

float ListaNotas::obtenerPromedioCurso(int idCurso){
    NodoNota* aux = head;
    if(aux == nullptr){
        return 0;
    }

    int cont = 0;
    float suma = 0;
    while(aux->sigNota != nullptr){
        int idNodo = aux->getIDCurso();
        if(idNodo==idCurso){
            cont+=1;
            suma+=aux->getNota();
        }
        aux = aux->sigNota;
    }
    return suma/cont;
}

float ListaNotas::obtenerPromedioGeneral(){
    NodoNota* aux = head;
    if(aux == nullptr){
        return 0;
    }

    int cont = 0;
    float suma = 0;
    while(aux->sigNota != nullptr){
        int idNodo = aux->getIDCurso();
        cont+=1;
        suma+=aux->getNota();
        aux = aux->sigNota;
    }
    return suma/cont;
}


