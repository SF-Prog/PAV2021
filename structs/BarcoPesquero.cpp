#include "BarcoPesquero.h"

BarcoPesquero::BarcoPesquero(string id, string nombre, int capacidad, int carga):Barco(id, nombre){
    this->capacidad = capacidad;
    this->carga = carga;
};

void BarcoPesquero::setCapacidad(int capacidad){
   this->capacidad = capacidad;
};

void BarcoPesquero::setCarga(int carga){ 
  this->carga = carga;
};

int BarcoPesquero::getCapacidad(){
   return this->capacidad; 
};

int BarcoPesquero::getCarga(){ 
  return this->carga;
};

void BarcoPesquero::arribar(float cargaDespacho){};

BarcoPesquero::~BarcoPesquero(){};