#include "AsisteDiferido.h"

  AsisteDiferido::AsisteDiferido(){};
  AsisteDiferido::AsisteDiferido(Log acceso){
    this->acceso = acceso;

  };

  Log AsisteDiferido::getAcceso(){
    return this->acceso;
  };
  
  void AsisteDiferido::setAcceso(Log acceso){
    this->acceso = acceso;
  };
  
  AsisteDiferido::~AsisteDiferido(){};