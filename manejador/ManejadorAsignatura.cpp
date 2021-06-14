#include "../manejador/ManejadorAsignatura.h"

ManejadorAsignatura* ManejadorAsignatura::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorAsignatura();
    return instancia;
};
/*
list<Asignatura*> ManejadorAsignatura::getAsignaturasTT(){
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
void ManejadorAsignatura::agregarAsignatura(Asignatura*){};
*/