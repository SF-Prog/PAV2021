#include "DtBarcoPasajeros.h"
#include <string>

DtBarcoPasajeros::DtBarcoPasajeros(){};
DtBarcoPasajeros::DtBarcoPasajeros(string id, string nombre, int cantPasajeros, TipoTamanio tamanio):DtBarco(id, nombre){
    this->cantPasajeros = cantPasajeros;
    this->tamanio = tamanio;
};
DtBarcoPasajeros::~DtBarcoPasajeros(){};