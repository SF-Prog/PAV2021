#include "Practico.h"

Practico::Practico(string nombre, time_t inicio, time_t fin, string codigo):Clase(nombre, inicio, fin, codigo){};
DtInfoClase Practico::getDtinfoClase(){
    list<Docente*> docentes = this->getDocentes();
    list<string> emailDocentes;
    DtInfoClase dtic;
    for(list<Docente*>::iterator it=docentes.begin(); it!=docentes.end(); it++){
        emailDocentes.push_front((*it)->getEmail());
    };
    return DtInfoClase(this->getId(), this->getNombre(), emailDocentes);
};
// DESTRUCTOR
Practico::~Practico(){
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
};