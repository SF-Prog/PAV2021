#include "AsisteDiferido.h"

  AsisteDiferido::AsisteDiferido(){};
  AsisteDiferido::AsisteDiferido(log acceso){
    this->acceso = acceso;

  };

  TimeStamp AsisteDiferido::getInicio(){
    return this->inicio;
  };
  TimeStamp AsisteDiferido::getFin(){
    return this->fin;
  };
  
  void AsisteDiferido::setInicio(TimeStamp inicio){
    this->inicio = inicio;
  };
  void AsisteDiferido::setFin(TimeStamp  fin){
    this->fin = fin;
  };
  
  AsisteDiferido::~AsisteDiferido(){};