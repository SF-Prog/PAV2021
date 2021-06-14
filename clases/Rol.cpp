#include "Rol.h"
//Constructores
Rol::Rol(){};
Rol::Rol(TipoRol tipo){
  this->tipo = tipo;
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
// DESTRUCTOR
Rol::~Rol(){};