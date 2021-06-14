#include "Asignatura.h"

  Asignatura::Asignatura(){};
  Asignatura::Asignatura(string id ,string nombre){
    this->codigo = codigo;
    this->nombre = nombre;
  };

  string Asignatura::getCodigo(){
    return this->codigo;
  };
  string Asignatura::getNombre(){
    return this->nombre;
  };
  

  void Asignatura::setCodigo(string codigo){
    this->codigo = codigo;
  };
  void Asignatura::setNombre(string nombre ){
    this->nombre = nombre;
  };
  
   Asignatura::~Asignatura(){};