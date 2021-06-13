#include "Docente.h"

Docente::Docente(){};
Docente::Docente(string nombre, string imagenUrl, string email,
string password, string instituto):Perfil(nombre, imagenUrl, email, password){
  this->instituto = instituto;
};
string Docente::getInstituto(){
  return this->instituto;
};
void Docente::setInstituto(string instituto){
  this->instituto = instituto;
};
list<string> Docente::asignaturas(){
  list<string> codigosAsignaturas;
  for(list<Rol*>::iterator it = this->roles.begin(); it != this->roles.end(); it++){
    codigosAsignaturas.push_front((*it)->getCodigoAsignatura());
  };
  return codigosAsignaturas;
};
bool Docente::tieneMonitoreo(string codigo){
  bool res = false;
  for(list<Rol*>::iterator it=this->roles.begin(); it != this->roles.end(); it++){
    string cod = (*it)->getCodigoAsignatura();
    if (cod == codigo)
      res = (*it)->getTipo() == MONITOREO;
  };
  return res;
};
// DESTRUCTOR
Docente::~Docente(){};