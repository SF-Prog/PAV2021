#include "Docente.h"

Docente::Docente(){};
Docente::Docente(string nombre, string imagenUrl, string email,
string password, string instituto):Perfil(nombre, imagenUrl, email, password){
  this->instituto = instituto;
};
Docente::Docente(string nombre, string imagenUrl, string email,
string password, string instituto, list<Rol*> roles):Perfil(nombre, imagenUrl, email, password){
  this->instituto = instituto;
  this->roles = roles;
};
string Docente::getInstituto(){
  return this->instituto;
};
void Docente::setInstituto(string instituto){
  this->instituto = instituto;
};
list<Rol*> Docente::getRoles(){
  return this->roles;
}
void Docente::setRoles(list<Rol*> roles){
  this->roles = roles;
}
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
void Docente::agregarAsignatura(Rol* rol){
  this->roles.push_front(rol);
};
bool Docente::noDictaLaAsignatura(string cod){
  list<Rol*> rolesDelDocente = this->getRoles();
  bool noDicta = true;
  for(list<Rol*>::iterator it=rolesDelDocente.begin(); it != rolesDelDocente.end(); it++){
    if(cod == (*it)->getCodigoAsignatura()){
      noDicta = false;
    }
  };
  return noDicta;
}
// DESTRUCTOR
Docente::~Docente(){};