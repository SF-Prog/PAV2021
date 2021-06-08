#include "Estudiante.h"

Estudiante::Estudiante(){};
Estudiante::Estudiante(string nombre, string imagenUrl, string email,
string password, string documento):Perfil(nombre, imagenUrl, email, password){
  this->documento = documento;
};

string Estudiante::getDocumento(){
  return this->documento;
};

void Estudiante::setDocumento(string documento){
  this->documento = documento;
};

bool Estudiante::member(Asignatura* asignatura){
    this->asignaturas.find(asignatura->getCodigo()) != this->asignaturas.end();
};
bool Estudiante::estaInscripto(string codigo){
  ManejadorAsignatura* mA = ManejadorAsignatura::getInstancia();
  Asignatura* asignatura = mA->getAsignatura(codigo);
  return member(asignatura);
};

// DESTRUCTOR
Estudiante::~Estudiante(){};