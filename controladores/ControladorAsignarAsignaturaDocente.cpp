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
    // El usuario escoge un rol de los de esta lista y el controlador lo gurda en 
    // la variable this->cod
    return LstCodigoAsignaturas;
}
list<string> ControladorAsignarAsignaturaDocente::docentesSinLaAsignatura(string cod){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* a = mA->getAsignatura(cod);
    list<Perfil*> listPerfiles = mP->listarPerfiles();
    list<string> listDocentesSinAsignatura;

    for(list<Perfil*>::iterator it = listPerfiles.begin(); it != listPerfiles.end(); it++){
        Docente* docente = dynamic_cast<Docente*>(*it);
        if(docente != NULL){
            list<string> asignaturasDocente = docente->asignaturas();
            bool tieneAsignatura = false;

            for(list<string>::iterator itA = asignaturasDocente.begin(); itA != asignaturasDocente.end(); itA++){
                if(*itA == a->getCodigo()){
                    tieneAsignatura = true;
                };
            };
            if(tieneAsignatura == true){
                listDocentesSinAsignatura.push_front(docente->getEmail());
            };
        };
    };
    return listDocentesSinAsignatura;
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
ControladorAsignarAsignaturaDocente::~ControladorAsignarAsignaturaDocente(){};
