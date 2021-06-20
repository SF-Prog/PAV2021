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
list<string> ControladorAsignarAsignaturaDocente::docentesSinLaAsignatura(string cod){
    this->cod = cod;
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> listPerfiles = mP->listarPerfiles();
    list<string> docentesSinAsignatura;
    for(list<Perfil*>::iterator it = listPerfiles.begin(); it != listPerfiles.end(); it++){
        if(Docente* docente = dynamic_cast<Docente*>(*it)){
            if(docente->noDictaLaAsignatura(cod)){
                docentesSinAsignatura.push_front(docente->getEmail());
            };
        }
    }
    return docentesSinAsignatura;
};
void ControladorAsignarAsignaturaDocente::selectDocente(string email, TipoRol rol){
    this->email = email;
    this->rol = rol;
};
void ControladorAsignarAsignaturaDocente::asignarDocente(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Docente* docente = dynamic_cast<Docente*>(mP->getPerfil(this->email));
    Asignatura* asignatura = mA->getAsignatura(this->cod);
    
    Rol* rol = new Rol(this->rol, asignatura);
    docente->agregarAsignatura(rol);
};

void ControladorAsignarAsignaturaDocente::cancelar(){};

ControladorAsignarAsignaturaDocente::~ControladorAsignarAsignaturaDocente(){};
