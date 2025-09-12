#pragma once
#include <string>
using namespace std;
//identificador único, nombre, apellido, carrera y fecha de ingreso
class Alumno{
    private:
    int id, nombre, apellido, carrera, fechaIngreso;
    public:
    Alumno(string,string,string,string);
    int getID();
    string getNombre();
    string getApellido();
    string getCarrera();
    string getFecha();
    string toString();
};