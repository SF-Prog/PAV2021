#include "Docente.h"

Docente::Docente(){};
Docente::Docente(string instituto):Perfil(nombre, imagenUrl, email, password){
  this->instituto = instituto;
};
string Docente::getInstituto(){
  return this->instituto;
};
void Docente::setInstituto(string instituto ){
  this->instituto = instituto;
};
 
// DESTRUCTOR
Docente::~Docente(){};