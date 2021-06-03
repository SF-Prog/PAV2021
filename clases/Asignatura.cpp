#include "Asignatura.h"

Asignatura::Asignatura(){};
Asignatura::Asignatura(string id ,string nombre){
  this->codigo = codigo;
  this->nombre = nombre;
};

string Asignatura::getCodigo(){
  return this->codigo;
};
string Asignatura::getNombre(){
  return this->nombre;
};


void Asignatura::setCodigo(string codigo){
  this->codigo = codigo;
};
void Asignatura::setNombre(string nombre ){
  this->nombre = nombre;
};

list<Clase*> Asignatura::getClases(){
  // list<Clase*> dticList;
  // for(map<int, Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
  //   DtInfoClase dtic = DtInfoClase(it->second->getId(), it->second->getNombre(), it->second->getDocentes());
  //   // en getDocentes() hay que ver la forma de retornar los docentes de clase
  //   dticList.push_front(dtic);
  // };
   return this->clases;
};

Asignatura::~Asignatura(){};