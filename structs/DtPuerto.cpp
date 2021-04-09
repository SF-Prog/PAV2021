#include "DtPuerto.h"

DtPuerto::DtPuerto(){}
DtPuerto::DtPuerto(string id, string nombre,DtFecha fechaCreacion){
  this->id = id;
  this->nombre = nombre;
  this->fechaCreacion = fechaCreacion;
}

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
//void agregarPuerto(string id, string nombre, DtFecha fechaCreacion){}

ostream& operator <<(ostream& salida, const DtPuerto& puerto){
  cout << "Id del puerto: " << puerto.id << ". Nombre del puerto: " << puerto.nombre << ". Fecha de creacion: " << puerto.fechaCreacion << endl; // << puerto.fechaCreacion << endl;
  return salida;
};

DtPuerto::~DtPuerto(){}