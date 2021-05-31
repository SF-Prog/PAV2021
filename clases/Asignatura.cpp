#include "Asignatura.h"

  Asignatura::Asignatura(){};
  Asignatura::Asignatura(string id ,string nombre){
    this->codigo = codigo;
    this->nombre = nombre;
  };

  int Asignatura::getCodigo(){
    return this->id;
  };
  string Asignatura::getNombre(){
    return this->nombre;
  };
  

  void Asignatura::setCodigo(int id){
    this->codigo = codigo;
  };
  void Asignatura::setNombre(string nombre ){
    this->nombre = nombre;
  };
  
   Asignatura::~Asignatura(){};