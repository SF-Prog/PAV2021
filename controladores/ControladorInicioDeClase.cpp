#include "ControladorInicioDeClase.h"

list<string> ControladorInicioDeClase::asignaturasAsignadas(){
    this->docente = dynamic_cast<Docente*>(Sesion::getInstancia()->getPerfil());
    return this->docente->asignaturas();
};
bool ControladorInicioDeClase::selectAsignatura(DtIniciarClase dtic){
    this->dtInicio = dtic;
    list<string> asignaturas = this->docente->asignaturas();
    list<string>::iterator it;
    while (it != asignaturas.end() && *it != dtic.getCodigo()){
        it++;
    };
    if (*it == dtic.getCodigo())
        return true;
    else
        return false;
};
list<string> ControladorInicioDeClase::inscriptosAsignatura(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->listarPerfiles();
    list<string> emails;
    for(list<Perfil*>::iterator it; it != perfiles.end(); it++){
        if (Estudiante* est = dynamic_cast<Estudiante*>(*it)) {
            if (est->estaInscripto(this->dtInicio.getCodigo())){
                emails.push_front(est->getEmail());
            }
        }
    }
    return emails;
};
void ControladorInicioDeClase::habilitar(string){};
DtIniciarClaseFull ControladorInicioDeClase::Ingresados(){};
void ControladorInicioDeClase::iniciarClase(){};
void ControladorInicioDeClase::cancelar(){};
