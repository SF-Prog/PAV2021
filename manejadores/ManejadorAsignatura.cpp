#include "ManejadorAsignatura.h"

ManejadorAsignatura* ManejadorAsignatura::instancia = NULL;

ManejadorAsignatura::ManejadorAsignatura(){};
ManejadorAsignatura::~ManejadorAsignatura(){};
ManejadorAsignatura* ManejadorAsignatura::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorAsignatura();
    return instancia;
};
list<Asignatura*> ManejadorAsignatura::getAsignaturas(){
    list<Asignatura*> LstAsignatura;

    for(map<string, Asignatura*>::iterator it = this->asignaturas.begin(); it!=this->asignaturas.end(); it++){
        LstAsignatura.push_front(it->second);        
    };

    return LstAsignatura;
};
Asignatura* ManejadorAsignatura::getAsignatura(string cod){
    return this->asignaturas.find(cod)->second;
};
void ManejadorAsignatura::removerAsignatura(Asignatura*){};
void ManejadorAsignatura::agregarAsignatura(Asignatura* asignatura){
    this->asignaturas.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};
