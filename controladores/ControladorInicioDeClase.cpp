#include "ControladorInicioDeClase.h"


ControladorInicioDeClase::ControladorInicioDeClase(){};

string ControladorInicioDeClase::getTipoRol(){
    return this->tipoRol;
}

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
    if (*it == dtic.getCodigo()){
    
         list<Rol*> listaRoles = this->docente->getRoles();
         list<Rol*>::iterator it2;
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
  
    if (this->tipoRol == to_string(MONITOREO)){
         Monitoreo* monitoreo = new Monitoreo(this->data.getNombre(),this->docente,this->data.getFechaHora(),this->data.getCodigo(),this->habilitados);
         ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
         mP->add(this->docente);
        list<Perfil*> perfiles = mP->listarPerfiles();
        for(list<Perfil*>::iterator it = perfiles.begin(); it != perfiles.end(); it++){
           if (Estudiante* est = dynamic_cast<Estudiante*>(*it)) {
              if (est->estaInscripto((*it)->getNombre())){
                  mP->add((*it));
                }
            }
        }
    
    if (this->tipoRol == to_string(PRACTICO)){
        Practico* practico = new Practico(this->data.getNombre(),this->data.getFechaHora(),
                                          this->data.getFechaHora(),this->data.getCodigo());
        ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
         mP->add(this->docente);
    }

    if (this->tipoRol == to_string(TEORICO)){
        Teorico* teorico = new Teorico(this->data.getNombre(),this->data.getFechaHora(),
                                       this->data.getFechaHora(),this->data.getCodigo());
        ManejadorPerfil* mP =  ManejadorPerfil::getInstancia();
         mP->add(this->docente);
    }
   
    Clase* clase = new Clase(this->data.getNombre(), this->docente, this->data.getFechaHora(), this->data.getCodigo());
    ManejadorClase* mC = ManejadorClase::getInstancia();
    mC->agregarClase(clase);
    ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
    Asignatura* asignatura = mA->getAsignatura(this->data.getCodigo());
    asignatura->agregarClase(clase);
    }
}

void ControladorInicioDeClase::cancelar(){
    delete this->docente;
};
ControladorInicioDeClase::~ControladorInicioDeClase(){};