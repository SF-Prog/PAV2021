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
DtInfoMonitoreo Monitoreo::getDtInfoClase(){
    list<Docente*> docentes = this->getDocentes();
    list<string> emailDocentes, emailEstudiantes;
    DtInfoClase dtic;
    for(list<Docente*>::iterator it=docentes.begin(); it!=docentes.end(); it++){
        emailEstudiantes.push_front((*it)->getEmail());
    };
    for(map<string, Estudiante*>::iterator it=this->estudiantes.begin(); it!=this->estudiantes.end(); it++){
        emailEstudiantes.push_front(it->second->getEmail());
    };
    return DtInfoMonitoreo(this->getId(), this->getNombre(), emailDocentes, emailEstudiantes);
};
// DESTRUCTOR
Monitoreo::~Monitoreo(){
    for(map<string, Estudiante*>::iterator it=this->estudiantes.begin(); it!=this->estudiantes.end(); it++)
      this->estudiantes.erase(it);
};