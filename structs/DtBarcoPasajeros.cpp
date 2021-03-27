#include "DtBarcoPasajeros.h"
#include <string>

DtBarcoPasajeros::DtBarcoPasajeros(){};
DtBarcoPasajeros::DtBarcoPasajeros(string id, string nombre, int cantPasajeros, TipoTamanio tamanio):DtBarco(id, nombre){
    this->cantPasajeros = cantPasajeros;
    this->tamanio = tamanio;
};
DtBarcoPasajeros::setCantPasajeros(int cantPasajeros){
  this->cantPasajeros=cantPasajeros;
};
DtBarcoPasajeros::getCantPasajeros(){
  return this->cantPasajeros;
};
DtBarcoPasajeros::setTamanio(TipoTamanio tamanio){
  this->tamanio=tamanio;
};
DtBarcoPasajeros::getTamanio(){
  return this->tamanio;
};
DtBarcoPasajeros::~DtBarcoPasajeros(){};