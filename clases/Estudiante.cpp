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

<<<<<<< HEAD
void Estudiante::borrarAsignatura(string codAsignatura){
  this->asignaturas.erase(codAsignatura);
}
=======

void Estudiante::addAsignatura(Asignatura* asignatura){
  this->asignaturas.insert(pair<string, Asignatura*>(asignatura->getCodigo(), asignatura));
};
>>>>>>> af747d09514431bab7fced5e9c67adf4c1de1bbd

// DESTRUCTOR
Estudiante::~Estudiante(){};
