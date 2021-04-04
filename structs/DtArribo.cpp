#include "DtArribo.h"
#include <string>
using namespace std;

DtArribo::DtArribo(){}
DtArribo::DtArribo(float carga, DtFecha fecha,DtBarco * barco){
  this->carga = carga;
  this->fecha = fecha;
  this->barco = barco;
}
  
  // OBTENER DATOS
float DtArribo::getCarga(){
  return this->carga;
}
DtFecha DtArribo::getFecha(){
  return this->fecha;
}
DtBarco * DtArribo::getBarco(){
  return this->barco;
}
  
// CONFIGURAR DATOS
void DtArribo::setCarga(float carga){
  this->carga = carga;
}
void DtArribo::setFecha(DtFecha fecha){
  this->fecha = fecha;
}
void DtArribo::setBarco(DtBarco* barco){
  this->barco = barco;
}

ostream& operator <<(ostream& salida, const DtArribo& arribo){
  salida << "Carga del arribo: " << arribo.carga << endl
  << "Barco del arribo: " << *arribo.barco << endl
  << "Fecha del arribo: " << arribo.fecha << endl;
  return salida;
}

// DESTUCTOR
DtArribo::~DtArribo(){}
