#include "Clase.h"

  Clase::Clase(){};
  Clase::Clase(int id ,string nombre, time_t inicio, time_t fin,string rutaVideo){
    this->id = id;
    this->nombre = nombre;
    this->inicio = inicio;
    this->fin = fin;
    this->rutaVideo = rutaVideo;
  };
  Clase::Clase(int id ,string nombre, map<string, Docente*> docentes, time_t inicio, time_t fin,string rutaVideo){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
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
  map<string, Docente*> Clase::getDocentes(){
    return this->docentes;
  };
  void Clase::addDocente(Docente* docente){
    this->docentes.insert(pair<string,Docente*>(docente->getInstituto(), docente));
  };
  time_t Clase::getInicio(){
    return this->inicio;
  };
  time_t Clase::getFin(){
    return this->fin;
  };
  string Clase::getRutaVideo(){
    return this->rutaVideo;
  };
  DtInfoClase Clase::getDtInfoClase(){
    return DtInfoClase(this->id, this->nombre, this->docentes);
  };

  void Clase::setId(int id){
    this->id = id;
  };
  void Clase::setNombre(string nombre ){
    this->nombre = nombre;
  };
  void Clase::setInicio(time_t inicio){
    this->inicio = inicio;
  };
  void Clase::setFin(time_t  fin){
    this->fin = fin;
  };
  void Clase::setRutaVideo(string rutaVideo){
      this->rutaVideo = rutaVideo;
  };
  