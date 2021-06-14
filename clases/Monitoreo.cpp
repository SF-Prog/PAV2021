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
// DESTRUCTOR
Monitoreo::~Monitoreo(){};