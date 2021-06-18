#include "ControladorEliminarAsignatura.h"

ControladorEliminarAsignatura::ControladorEliminarAsignatura(){};
list<string> ControladorEliminarAsignatura::listarAsignaturas(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    map<string, Asignatura*> asignaturas = mA->getAsignaturas();
    list<string> codigosAsignatura;
    for(map<string, Asignatura*>::iterator it=asignaturas.begin(); it!=asignaturas.end(); it++){
        codigosAsignatura.push_front(it->second->getCodigo());
    };
    return codigosAsignatura;
};
void ControladorEliminarAsignatura::selectAsignatura(int codigo){
    this->codigo = codigo;
};
void ControladorEliminarAsignatura::eliminarAsignatura(){
    ManejadorClase* mC = ManejadorClase::getInstancia();
    mC->eliminarClase(this->codigo);
};
void ControladorEliminarAsignatura::cancelar(){};

