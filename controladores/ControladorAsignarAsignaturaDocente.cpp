#include "ControladorAsignarAsignaturaDocente.h"

ControladorAsignarAsignaturaDocente::ControladorAsignarAsignaturaDocente(){};
list<string> ControladorAsignarAsignaturaDocente::listarAsignaturas(){
    
    map<string, Asignatura*> asignaturas;
    list<string> lstCodigoAsignaturas;

    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    asignaturas = mA->getAsignaturas();

    for (map<string, Asignatura*>::iterator it=asignaturas.begin(); it!=asignaturas.end(); ++it){
        lstCodigoAsignaturas.push_front(it->second->getCodigo());
    }
    return lstCodigoAsignaturas;
}
void ControladorAsignarAsignaturaDocente::docentesSinLaAsignatura(string){};
void ControladorAsignarAsignaturaDocente::selectDocente(string, TipoRol){};
void ControladorAsignarAsignaturaDocente::asignarDocente(){};
ControladorAsignarAsignaturaDocente::~ControladorAsignarAsignaturaDocente(){};
