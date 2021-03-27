#include "DtBarcoPesquero.h"
#include <string>

DtBarcoPesquero::DtBarcoPesquero(){};
DtBarcoPesquero::DtBarcoPesquero(string id, string nombre, int capacidad, int carga):DtBarco(id, nombre){
    this->capacidad = capacidad;
    this->carga = carga;
};
void DtBarcoPesquero::setCapacidad(int capacidad){};
void DtBarcoPesquero::setCarga(int carga){};
DtBarcoPesquero::~DtBarcoPesquero(){};
