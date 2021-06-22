#include "Monitoreo.h"

Monitoreo::Monitoreo(string nom, Docente* doc, time_t fecha, string codigo, list<string> habs):
                    Clase(nom, doc, fecha, codigo){
    this->habilitados = habs;
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    for(list<string>::iterator it = habs.begin(); it!=habs.end(); it++){
        Perfil* per = mP->getPerfil(*it);
        Estudiante* est = dynamic_cast<Estudiante*>(per);
        this->estudiantes.insert(pair<string, Estudiante*>(est->getDocumento(), est));
    };
};
DtInfoMonitoreo* Monitoreo::getDtInfoClase(){
    list<Docente*> docentes = this->getDocentes();
    list<string> emailDocentes, emailEstudiantes;
    for(list<Docente*>::iterator it=docentes.begin(); it!=docentes.end(); it++){
        emailEstudiantes.push_front((*it)->getEmail());
    };
    for(map<string, Estudiante*>::iterator it=this->estudiantes.begin(); it!=this->estudiantes.end(); it++){
        emailEstudiantes.push_front(it->second->getEmail());
    };
    return new DtInfoMonitoreo(this->getId(), this->getNombre(), emailDocentes, emailEstudiantes);
};
// DESTRUCTOR
Monitoreo::~Monitoreo(){
    for(list<AsisteEnVivo*>::iterator it=this->asistenciasEnVivo.begin(); it!=asistenciasEnVivo.end(); ++it){
        this->asistenciasEnVivo.erase(it);
    };
    for(list<AsisteDiferido*>::iterator it=this->asistenciasDiferido.begin(); it!=asistenciasDiferido.end(); ++it){
        this->asistenciasDiferido.erase(it);
    };
    for(map<int, Participacion*>::iterator it=this->participaciones.begin(); it!=participaciones.end(); ++it){
        this->participaciones.erase(it);
    };
    for(list<Docente*>::iterator it=this->docentes.begin(); it!=docentes.end(); ++it){
        this->docentes.remove(*it);
    };
    for(map<string, Estudiante*>::iterator it=this->estudiantes.begin(); it!=this->estudiantes.end(); it++)
      this->estudiantes.erase(it);
};