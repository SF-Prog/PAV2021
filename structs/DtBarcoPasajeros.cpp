#include "DtBarcoPasajeros.h"
#include <string>

DtBarcoPasajeros::DtBarcoPasajeros(){};
DtBarcoPasajeros::DtBarcoPasajeros(string id, string nombre, int cantPasajeros, TipoTamanio tamanio):DtBarco(id, nombre){
    this->cantPasajeros = cantPasajeros;
    this->tamanio = tamanio;
};
void DtBarcoPasajeros::setCantPasajeros(int cantPasajeros){
  this->cantPasajeros=cantPasajeros;
};
int DtBarcoPasajeros::getCantPasajeros(){
  return this->cantPasajeros;
};
void DtBarcoPasajeros::setTamanio(TipoTamanio tamanio){
  this->tamanio=tamanio;
};
TipoTamanio DtBarcoPasajeros::getTamanio(){
  return this->tamanio;
};
ostream& operator << (ostream& salida, const DtBarcoPasajeros& dbp){
  // cout << (Barco) bp << endl;
  string tipoTamanio[4] = {"BOTE","CRUCERO","GALEON","TRANSATLATICO"};
  salida << (DtBarco)dbp << "-------PASAJEROS-------- CantPasajeros: " << dbp.cantPasajeros << "----------TipoTamanio: " << tipoTamanio[dbp.tamanio] << endl;
  return salida;
};
DtBarcoPasajeros::~DtBarcoPasajeros(){};