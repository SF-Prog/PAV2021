#include "ControladorInscripcionAsignatura.h"

ControladorInscripcionAsignatura::ControladorInscripcionAsignatura(){

};
list<string> ControladorInscripcionAsignatura::asignaturasNoInscripto(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Asignatura*> listAsignaturas = mA->getAsignaturas();
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    map<string, Asignatura*> mapAsignaturas = estudiante->getAsignaturas();
    list<string> listCodAsignaturas;
    for(map<string, Asignatura*>::iterator it = mapAsignaturas.begin(); it != mapAsignaturas.end(); it++){
        bool estaInscripto = false;
        string codigoAsignaturaItertor = it->second->getCodigo();
        for(list<Asignatura*>::iterator itA = listAsignaturas.begin(); itA != listAsignaturas.end(); itA++){
            if((*itA)->getCodigo() == codigoAsignaturaItertor){
                estaInscripto = true;
            }
        }
        if(estaInscripto == true){
            listCodAsignaturas.push_front(codigoAsignaturaItertor);
        }
    }
    return listCodAsignaturas;
};
void ControladorInscripcionAsignatura::selectAsignatura(string cod){
    this->cod = cod;
};
void ControladorInscripcionAsignatura::inscribir(){
    Estudiante* estudiante = dynamic_cast<Estudiante*>(Sesion::getInstancia()->getPerfil());
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(this->cod);
    map<string, Asignatura*> asignaturasEstudiante= estudiante->getAsignaturas();
    asignaturasEstudiante.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};
void ControladorInscripcionAsignatura::cancelar(){};
ControladorInscripcionAsignatura::~ControladorInscripcionAsignatura(){};