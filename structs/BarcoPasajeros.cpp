#include "BarcoPasajeros.h"

#include <string>
using namespace std;


BarcoPasajeros::BarcoPasajeros(string id, string nombre, int cantPasajeros, TipoTamanio tamanio):Barco(id, nombre) {
  this->cantPasajeros = cantPasajeros;
  this->tamanio = tamanio;
}

void BarcoPasajeros::setCantPasajeros(int cantPasajeros){ this->cantPasajeros = cantPasajeros; }
void BarcoPasajeros::setTamanio(TipoTamanio tamanio){ this->tamanio = tamanio; }
int BarcoPasajeros::getCantPasajeros(){ return this->cantPasajeros; }
TipoTamanio BarcoPasajeros::getTamanio(){ return this->tamanio; }

void BarcoPasajeros::arribar(float cargaDespacho){}

BarcoPasajeros::~BarcoPasajeros(){};
