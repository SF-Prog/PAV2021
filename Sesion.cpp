#include "Sesion.h"

Sesion* Sesion::instancia = NULL;

Sesion::Sesion(){};

Sesion* Sesion::getInstancia(){
    if (instancia == NULL)
      instancia = new Sesion();
    return instancia;
};

Perfil* Sesion::getPerfil(){
    return this->perfil;
};
void Sesion::setPerfil(Perfil* perfil){
    this->perfil = perfil;
};

Sesion::~Sesion(){};