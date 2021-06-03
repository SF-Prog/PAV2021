#include "AsisteEnVivo.h"

  AsisteEnVivo::AsisteEnVivo(){};
  AsisteEnVivo::AsisteEnVivo(time_t inicio, time_t fin){
    this->inicio = inicio;
    this->fin = fin;
  };

  time_t AsisteEnVivo::getInicio(){
    return this->inicio;
  };
  time_t AsisteEnVivo::getFin(){
    return this->fin;
  };
  
  void AsisteEnVivo::setInicio(time_t inicio){
    this->inicio = inicio;
  };
  void AsisteEnVivo::setFin(time_t fin){
    this->fin = fin;
  };
  
  AsisteEnVivo::~AsisteEnVivo(){};