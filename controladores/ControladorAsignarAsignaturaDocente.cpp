#include "ControladorAsignarAsignaturaDocente.h"

ControladorAsignarAsignaturaDocente::ControladorAsignarAsignaturaDocente(){};
list<string> ControladorAsignarAsignaturaDocente::listarAsignaturas(){
    
    list<Asignatura*> LstAsignaturas;
    list<string> LstCodigoAsignaturas;

    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    LstAsignaturas = mA->getAsignaturas();

    for (list<Asignatura*>::iterator it=LstAsignaturas.begin(); it!=LstAsignaturas.end(); ++it){
        LstCodigoAsignaturas.push_front((*it)->getCodigo());
    }

    return LstCodigoAsignaturas;

}
void ControladorAsignarAsignaturaDocente::docentesSinLaAsignatura(string){};
void ControladorAsignarAsignaturaDocente::selectDocente(string, TipoRol){};
void ControladorAsignarAsignaturaDocente::asignarDocente(){};
ControladorAsignarAsignaturaDocente::~ControladorAsignarAsignaturaDocente(){};
