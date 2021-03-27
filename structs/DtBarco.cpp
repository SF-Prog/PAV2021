#include "DtBarco.h"

DtBarco::DtBarco(){};
DtBarco::DtBarco(string id, string nombre){
    this->id = id;
    this->nombre = nombre;
};
DtBarco::~DtBarco(){};
void DtBarco::setNombre(string nombre){
  this->nombre = nombre;
};
string DtBarco::getNombre(){
  return this->nombre;
};
void DtBarco::setId(string id){
  this->id = id;
};
string DtBarco::getId(){
  return this->id;
};
ostream& operator <<(ostream& salida, const DtBarco& db){
  cout<<"Nombre: " << db.nombre << endl;
  cout<<"Id: " << db.id << endl;

  return salida;
};


