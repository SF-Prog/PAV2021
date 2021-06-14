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
void ControladorInicioDeClase::habilitar(string email){
    this->habilitados.push_front(email);
};
DtIniciarClaseFull ControladorInicioDeClase::datosIngresados(){
    // UUID id;
    // this->data.setId(UuidCreate(&id));
    this->data.setCodigo(this->dtInicio.getCodigo());
    this->data.setNombre(this->dtInicio.getNombre());
    this->data.setFechaHora(this->dtInicio.getFechaHora());
};
void ControladorInicioDeClase::iniciarClase(){
    //hay que contemplar que tipo de Clase (monitoreo, practico o teorico) se quiere crear
    //para ver que constructor de clase usar
    Clase* clase = new Clase(this->data.getId(), this->data.getNombre(), this->docente, 
                            this->data.getFechaHora(), this->data.getCodigo());
    ManejadorClase* mC = ManejadorClase::getInstancia();
    mC->agregarClase(clase);
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(this->data.getCodigo());
    asignatura->agregarClase(clase);
};
void ControladorInicioDeClase::cancelar(){};
