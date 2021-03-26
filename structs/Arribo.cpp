#include <string>

#include "Arribo.h"

using namespace std;

Arribo::Arribo(){};
Arribo::Arribo(float a, DtFecha b,Barco * c){};

// OBTENER DATOS
float Arribo::getCarga(){};
DtFecha Arribo::getFecha(){};
Barco * Arribo::getBarcos(){};

// CONFIGURAR DATOS
void Arribo::setCarga(float carga){};
void Arribo::setFecha(DtFecha fecha){};
void Arribo::setBarcos(Barco * barcos){};

Arribo::~Arribo(){};