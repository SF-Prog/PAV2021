#include <string>

#include "Arribo.h"

using namespace std;

Arribo::Arribo(){};
Arribo::Arribo(DtFecha dtFecha, float carga){
    this->fecha = dtFecha;
    this->carga = carga;
};

// OBTENER DATOS
float Arribo::getCarga(){ return this->carga; };
DtFecha Arribo::getFecha(){ return this->fecha; };
Barco* Arribo::getBarco(){ return this->barco; };

// CONFIGURAR DATOS
void Arribo::setCarga(float carga){};
void Arribo::setFecha(DtFecha fecha){};

void Arribo::agregarBarco(Barco* barco){
    this->barco = barco;
};

Arribo::~Arribo(){};