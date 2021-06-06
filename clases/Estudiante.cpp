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

bool Estudiante::estaInscripto(string cod){};

// DESTRUCTOR
Estudiante::~Estudiante(){};