#include "Estudiante.h"

  Estudiante::Estudiante(){};
  Estudiante::Estudiante(string documento):Perfil(string nombre, string imagen, string email,string password){
    this->documento = documento;
   
  };
  string Estudiante::getDocumento(){
    return this->instituto;
  };
 

  void Estudiante::setDocumento(string instituto ){
    this->documento = documento;
  };
 
  // DESTRUCTOR




  // DESTRUCTOR
  Estudiante::~Estudiante(){};