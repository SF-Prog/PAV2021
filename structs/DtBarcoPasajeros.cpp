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
  cout << "_______BARCO___PASAJEROS_____\n" << endl;
  cout << "\tCantPasajeros: " << dbp.cantPasajeros << endl;
  cout << "\tTipoTamanio: " << dbp.tamanio << endl;
};
DtBarcoPasajeros::~DtBarcoPasajeros(){};