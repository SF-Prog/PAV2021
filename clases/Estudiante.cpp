#include "Estudiante.h"

Estudiante::Estudiante(){};
Estudiante::Estudiante(string documento):Perfil(nombre, imagenUrl, email,password){
  this->documento = documento;
};

string Estudiante::getDocumento(){
  return this->documento;
};

void Estudiante::setDocumento(string documento){
  this->documento = documento;
};

// DESTRUCTOR
Estudiante::~Estudiante(){};