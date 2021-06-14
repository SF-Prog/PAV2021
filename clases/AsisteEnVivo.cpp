#include "AsisteEnVivo.h"

  AsisteEnVivo::AsisteEnVivo(){};
  AsisteEnVivo::AsisteEnVivo(TimeStamp inicio, TimeStamp fin){
    this->inicio = inicio;
    this->fin = fin;
  };

  TimeStamp AsisteEnVivo::getInicio(){
    return this->inicio;
  };
  TimeStamp AsisteEnVivo::getFin(){
    return this->fin;
  };
  
  void AsisteEnVivo::setInicio(TimeStamp inicio){
    this->inicio = inicio;
  };
  void AsisteEnVivo::setFin(TimeStamp  fin){
    this->fin = fin;
  };
  
  AsisteEnVivo::~AsisteEnVivo(){};