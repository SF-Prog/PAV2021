#include "Clase.h"

  Clase::Clase(){};
  Clase::Clase(int id ,string nombre, TimeStamp inicio, TimeStamp fin,string rutaVideo){
    this->id = id;
    this->nombre = nombre;
    this->inicio = inicio;
    this->fin = fin;
    this->rutaVideo = rutaVideo;
  };

  int Clase::getId(){
    return this->id;
  };
  string Clase::getNombre(){
    return this->nombre;
  };
  TimeStamp Clase::getInicio(){
    return this->inicio;
  };
  TimeStamp Clase::getFin(){
    return this->fin;
  };
  string Clase::getRutaVideo(){
    return this->rutaVideo;
  };

  void Clase::setId(int id){
    this->id = id;
  };
  void Clase::setNombre(string nombre ){
    this->nombre = nombre;
  };
  void Clase::setInicio(TimeStamp inicio){
    this->inicio = inicio;
  };
  void Clase::setFin(TimeStamp  fin){
    this->fin = fin;
  };
  void Clase::setRutaVideo(string password){
      this->password = password;
  };
  