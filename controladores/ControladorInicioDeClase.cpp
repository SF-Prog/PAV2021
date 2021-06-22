#include "ControladorInicioDeClase.h"


ControladorInicioDeClase::ControladorInicioDeClase(){};

TipoRol ControladorInicioDeClase::getTipoRol(){
    return this->tipoRol;
}

list<string> ControladorInicioDeClase::asignaturasAsignadas(){
    this->docente = dynamic_cast<Docente*>(Sesion::getInstancia()->getPerfil());
    return this->docente->asignaturas();
};
bool ControladorInicioDeClase::selectAsignatura(DtIniciarClase dtic){
    this->dtInicio = dtic;
    list<string> asignaturas = this->docente->asignaturas();
    list<string>::iterator it = asignaturas.begin();
    while (it != asignaturas.end() && *it != dtic.getCodigo()){
        it++;
    };
    if (*it == dtic.getCodigo()){
         list<Rol*> listaRoles = this->docente->getRoles();
         list<Rol*>::iterator it2 = listaRoles.begin();
         while (it2 != listaRoles.end() && (*it2)->getCodigoAsignatura() != dtic.getCodigo()){
                it2++;
        };
         if ((*it2)->getCodigoAsignatura() == dtic.getCodigo()){
              if((*it2)->getTipo() == MONITOREO){
                  this->tipoRol = MONITOREO;
                  return true;
              }else if((*it2)->getTipo() == PRACTICO){
                  this->tipoRol = PRACTICO;
                  return false;
              } else if ((*it2)->getTipo() == TEORICO){
                  this->tipoRol = TEORICO;
                  return false;
              }
              return false;
        }
        return false;
    }else{
        return false;
    }

};
list<string> ControladorInicioDeClase::inscriptosAsignatura(){
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    list<Perfil*> perfiles = mP->listarPerfiles();
    list<string> emails;
    for(list<Perfil*>::iterator it = perfiles.begin(); it != perfiles.end(); it++){
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
    this->data.setCodigo(this->dtInicio.getCodigo());
    this->data.setNombre(this->dtInicio.getNombre());
    this->data.setFechaHora(this->dtInicio.getFechaHora());

    return this->data;
};
void ControladorInicioDeClase::iniciarClase(){
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    ManejadorClase* mC = ManejadorClase::getInstancia();
    if (this->tipoRol == MONITOREO){
        Monitoreo* monitoreo = new Monitoreo(this->data.getNombre(),this->docente,this->data.getFechaHora(),this->data.getCodigo(),this->habilitados);
        ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
        monitoreo->addDocente(this->docente);
        list<Perfil*> perfiles = mP->listarPerfiles();
        for(list<Perfil*>::iterator it = perfiles.begin(); it != perfiles.end(); it++){
           if (Estudiante* est = dynamic_cast<Estudiante*>(*it)) {
              if (est->estaInscripto(est->getNombre())){
                    monitoreo->addEstudiante(est);
                }
            }
        }
        Asignatura* asignatura = mA->getAsignatura(this->data.getCodigo());
        asignatura->agregarClase(monitoreo);
        mC->agregarClase(monitoreo);
    }

    if (this->tipoRol == PRACTICO){
        Practico* practico = new Practico(this->data.getNombre(),this->data.getFechaHora(),
                                          this->data.getFechaHora(),this->data.getCodigo());
        //ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
        practico->addDocente(this->docente);
        mC->agregarClase(practico);
        Asignatura* asignatura = mA->getAsignatura(this->data.getCodigo());
        asignatura->agregarClase(practico);
    };

    if (this->tipoRol == TEORICO){
        Teorico* teorico = new Teorico(this->data.getNombre(),this->data.getFechaHora(),
                                       this->data.getFechaHora(),this->data.getCodigo());
        teorico->addDocente(this->docente);
        //ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
        mC->agregarClase(teorico);
        Asignatura* asignatura = mA->getAsignatura(this->data.getCodigo());
        asignatura->agregarClase(teorico);
    };
};

void ControladorInicioDeClase::cancelar(){
    this->docente = NULL;
};
ControladorInicioDeClase::~ControladorInicioDeClase(){};
