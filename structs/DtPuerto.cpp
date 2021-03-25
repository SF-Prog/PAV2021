#include "DtPuerto.h"
#include <string>

DtPuerto::DtPuerto(){}
DtPuerto::DtPuerto(string id, string nombre,DtFecha fechaCreacion){}

// OBTENER DATOS
string DtPuerto::getId(){
  return this->id;
}
string DtPuerto::getNombre(){
  return this->nombre;
}
DtFecha DtPuerto::getFechaCreacion(){
  return this->fechaCreacion;
}
DtArribo* DtPuerto::getArribos(){
  // ACA FALTA CONFIGURAR EL ARRAY PARA CARGAR EL ARRIBO
  return *this->arribos;
}

// CONFIGURAR DATOS
void DtPuerto::setId(string id){
  this->id = id;
}
void DtPuerto::setNombre(string nombre){
  this->nombre = nombre;
}
void DtPuerto::setFechaCreacion(DtFecha fechaCreacion){
  this->fechaCreacion = fechaCreacion;
}
void DtPuerto::setArribos(DtArribo * arribo){
  // ACA FALTA CONFIGURAR EL ARRAY PARA CARGAR EL ARRIBO
  *this->arribos = arribo;
}

//METODOS
void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){
  
}


DtPuerto::~DtPuerto(){}