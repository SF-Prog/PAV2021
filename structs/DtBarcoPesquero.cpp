#include "DtBarcoPesquero.h"
#include <string>

DtBarcoPesquero::DtBarcoPesquero(){};
DtBarcoPesquero::DtBarcoPesquero(string id, string nombre, int capacidad, int carga):DtBarco(id, nombre){
    this->capacidad = capacidad;
    this->carga = carga;
};
void DtBarcoPesquero::setCapacidad(int capacidad){
  this->capacidad = capacidad;
};
int DtBarcoPesquero::getCapacidad(){
  return this->capacidad;
};
void DtBarcoPesquero::setCarga(int carga){
  this->carga = carga;
};
int DtBarcoPesquero::getCarga(){
  return this->carga;
};
DtBarcoPesquero::~DtBarcoPesquero(){};
