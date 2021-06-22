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

map<string, Asignatura*> Estudiante::getAsignaturas(){
  return this->asignaturas;
};

void Estudiante::eliminarAsignatura(string codAsignatura){
  //this->asignaturas.clear(codAsignatura);
  // capaz no precisa hacer nada
}

void Estudiante::addAsignatura(Asignatura* asignatura){
  this->asignaturas.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};

// DESTRUCTOR
Estudiante::~Estudiante(){};
