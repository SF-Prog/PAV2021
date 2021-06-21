#include "Rol.h"
//Constructores
Rol::Rol(){};
Rol::Rol(TipoRol tipo){
  this->tipo = tipo;
};
Rol::Rol(TipoRol tipo, Asignatura* asignatura){
  this->tipo = tipo;
  this->asignatura = asignatura;
};
// Getters y Setters
TipoRol Rol::getTipo(){
  return this->tipo;
};

void Rol::setTipo(TipoRol tipo){
  this->tipo = tipo;
};

string Rol::getCodigoAsignatura(){
  return this->asignatura->getCodigo();
}
void Rol::setAsignatura(Asignatura* asignatura){
  this->asignatura = asignatura;
}

bool Rol::esAsignatura(string cod){
  bool esAsig = false;
  if(this->asignatura->getCodigo() == cod){
      esAsig = true;
  }
  return esAsig;
}

void Rol::borrarAsignatura(string cod){
  delete asignatura;
}

// DESTRUCTOR
Rol::~Rol(){};
