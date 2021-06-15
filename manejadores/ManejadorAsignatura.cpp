#include "ManejadorAsignatura.h"

ManejadorAsignatura* ManejadorAsignatura::instancia = NULL;

ManejadorAsignatura::ManejadorAsignatura(){};
ManejadorAsignatura::~ManejadorAsignatura(){};
ManejadorAsignatura* ManejadorAsignatura::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorAsignatura();
    return instancia;
};
map<string, Asignatura*> ManejadorAsignatura::getAsignaturas(){
    return this->asignaturas;
};
Asignatura* ManejadorAsignatura::getAsignatura(string cod){
    return this->asignaturas.find(cod)->second;
};
void ManejadorAsignatura::removerAsignatura(Asignatura*){};
void ManejadorAsignatura::agregarAsignatura(Asignatura* asignatura){
    this->asignaturas.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};
