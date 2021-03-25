#include "DtArribo.h"
#include "DtBarco.h"
#include <string>
using namespace std;

DtArribo::DtArribo(){}
DtArribo::DtArribo(float carga, DtFecha fecha,DtBarco * barcos){
  this->carga = carga;
  this->fecha = fecha;
  this->barcos = barcos;
}
  
  // OBTENER DATOS
float DtArribo::getCarga(){
  return this->carga;
}
DtFecha DtArribo::getFecha(){
  return this->fecha;
}
DtBarco * DtArribo::getBarcos(){
  return this->barcos;
}
  
// CONFIGURAR DATOS
void DtArribo::setCarga(float carga){
  this->carga = carga;
}

void DtArribo::setFecha(DtFecha fecha){
  this->fecha = fecha;
}
void DtArribo::setBarcos(DtBarco * barcos){
  this->barcos = barcos;
}



// DESTUCTOR
DtArribo::~DtArribo(){}
