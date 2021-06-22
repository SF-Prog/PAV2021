#include "ControladorEliminarAsignatura.h"
#include "../clases/Estudiante.h"
#include "../clases/Docente.h"

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
void ControladorEliminarAsignatura::selectAsignatura(string codigo){
    this->codigo = codigo;
};
void ControladorEliminarAsignatura::eliminarAsignatura(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->listarPerfiles();
    for(list<Perfil*>::iterator it = perfiles.begin(); it != perfiles.end(); it++){
        Estudiante* e = dynamic_cast<Estudiante*>(*it);
        if (e != NULL){
            e->eliminarAsignatura(this->codigo);
        }else{
            Docente* d = dynamic_cast<Docente*>(*it);
            if (d != NULL){
                d->eliminarAsignatura(this->codigo);
            }
        }
    };
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* a = mA->getAsignatura(this->codigo);
    mA->removerAsignatura(a);
};
void ControladorEliminarAsignatura::cancelar(){};