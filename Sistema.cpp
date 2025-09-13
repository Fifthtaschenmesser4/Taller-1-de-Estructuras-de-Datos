#include "Sistema.h"
#include <iostream>
Sistema::Sistema(): listaCursos(),listaAlumnos(){
    idsAlumno = 0;
    idsCurso = 0;
}
int Sistema::nuevaIDalumno(){
    idsAlumno++;
    return idsAlumno;
}
int Sistema::nuevaIDcurso(){
    idsCurso++;
    return idsCurso;
}
void Sistema::crearAlumno(string nombre,string apellido,string carrera,string fecha){
    int id = nuevaIDalumno();
    Alumno nuevoAlumno(id,nombre,apellido,carrera,fecha);
    insertarAlumno(nuevoAlumno);
}
void Sistema::crearCurso(string nombre,int maximo,string carrera,string profesor){
    int id = nuevaIDcurso();
    Curso nuevoCurso(id,nombre,maximo,carrera,profesor);
    insertarCurso(nuevoCurso);
}
void Sistema::insertarCurso(Curso curso){
    listaCursos.insertarCurso(curso);
}
void Sistema::insertarAlumno(Alumno alumno){
    listaAlumnos.insertarAlumno(alumno);
}

void Sistema::eliminarCursoSISTEMA(int id){
    Curso* cr = listaCursos.obtenerCurso(id);
    cr->autoEliminarse();
    delete cr;

}

void Sistema::printAlumnosNombre(string nombre){
    listaAlumnos.printInfosBusqueda(nombre);
}
void Sistema::printAlumnoID(int id){
    listaAlumnos.printInfosBusqueda(id);
}
void Sistema::printCursosNombre(string nombre){
    listaCursos.printInfosBusqueda(nombre);
}
void Sistema::printCursoID(int id){
    listaCursos.printInfosBusqueda(id);
}
void Sistema::eliminarAlumnoSISTEMA(int){
    /*
Eliminar del sistema:
1.Buscar alumno en listaAlumnos.
2. Entrar en sus cursos.
3. Eliminar su nodo, de cada miembrosCurso, cambiando nexos.
4. Eliminar objeto Alumno, del nodo de listaAlumnos.
5. Eliminar nodo alumno de listaAlumnos, cambiando nexos.
    */
    
}
bool Sistema::obtenerCurso(int id){
    Curso* cr = listaCursos.obtenerCurso(id);
    if(cr==nullptr){
        cout<<"No existe curso con esa id!"<<endl;
        return false;
    }
    cr->recorrerCurso();
    return true;
}
bool Sistema::obtenerAlumno(int id){
    Alumno* al = listaAlumnos.obtenerAlumno(id);
    if(al==nullptr){
        cout<<"No existe alumno con esa id!"<<endl;
        return false;
    }
    al->recorrerCursos();
    return true;
}
void Sistema::eliminarAlumnoCurso(int idAlumno, int idCurso){
    Curso* cr = listaCursos.obtenerCurso(idCurso);
    cr->eliminarAlumno(idAlumno);
}

void Sistema::inscribirAlumnoCurso(int idAlumno,int idCurso){
    Alumno* al = listaAlumnos.obtenerAlumno(idAlumno);
    NodoAlumno alumno(*al);
    Curso* cr = listaCursos.obtenerCurso(idCurso);
    if(al != nullptr and cr != nullptr){
        cr->insertar(alumno);
        return;
    }
    cout<<"Una o ambas ID's es/son inválidas"<<endl;
}
bool Sistema::agregarNota(int idAlumno, int idCurso, float nota){
    Alumno* al = listaAlumnos.obtenerAlumno(idAlumno);
    return al->agregarNota(idCurso,nota);
}
void Sistema::showAlumnos(){
    listaAlumnos.printLista();
}
void Sistema::showAlumnos(Curso curso){
    curso.recorrerCurso();
}
void Sistema::showCursos(){
    listaCursos.printLista();
}
void Sistema::showCursos(Alumno alumno){
    alumno.recorrerCursos();
}
void Sistema::showCursos(int idAlumno){
    Alumno* al = listaAlumnos.obtenerAlumno(idAlumno);
    al->recorrerCursos();
}
void Sistema::showCarrera(string carrera){
    listaAlumnos.printLista(carrera);
}
void Sistema::calcularPromedioCurso(int idAlumno, int idCurso){
    Alumno* al = listaAlumnos.obtenerAlumno(idAlumno);
    float promedio = al->obtenerPromedioCurso(idCurso);
    if(promedio == 0){
        cout<<"El alumno no tiene notas para este curso!"<<endl;
        return;
    } 
    cout<<"El alumno tiene promedio "<<promedio<<endl;
}

void Sistema::calcularPromedioGeneral(int idAlumno){
    Alumno* al = listaAlumnos.obtenerAlumno(idAlumno);
    float promedio = al->obtenerPromedioGeneral();
    if(promedio == 0){
        cout<<"El alumno no tiene ninguna nota registrada!"<<endl;
        return;
    } 
    cout<<"El alumno tiene promedio "<<promedio<<endl;
}