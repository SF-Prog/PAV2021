#include "ManejadorAsignatura.h"

ManejadorAsignatura* ManejadorAsignatura::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorAsignatura();
    return instancia;
};
list<Asignatura*> ManejadorAsignatura::getAsignaturas(){};
Asignatura* ManejadorAsignatura::getAsignatura(string cod){
    return this->asignaturas.find(cod)->second;
};
void ManejadorAsignatura::removerAsignatura(Asignatura*){};
void ManejadorAsignatura::agregarAsignatura(Asignatura*){};
