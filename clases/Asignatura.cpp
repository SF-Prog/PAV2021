#include "Asignatura.h"

Asignatura::Asignatura(){};
Asignatura::Asignatura(string id ,string nombre){
  this->codigo = codigo;
  this->nombre = nombre;
};

int Asignatura::getCodigo(){
  return this->id;
};
string Asignatura::getNombre(){
  return this->nombre;
};


void Asignatura::setCodigo(int id){
  this->codigo = codigo;
};
void Asignatura::setNombre(string nombre ){
  this->nombre = nombre;
};

list<DtInfoClase> Asignatura::getDtInfoClase(){
  list<DtInfoClase> dticList;
  for(map<int, Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
    DtInfoClase dtic = DtInfoClase(it->second->getId(), it->second->getNombre(), it->second->getDocentes());
    // en getDocentes() hay que ver la forma de retornar los docentes de clase
    dticList.push_front(dtic);
  };
  return dticList;
};

  Asignatura::~Asignatura(){};