#include "Estudiante.h"

  Estudiante::Estudiante(){};
  Estudiante::Estudiante(string nombre, string imagen, string email,string password,string documento):Perfil(nombre,imagen,email,password){
    this->documento = documento;
   
  };
  string Estudiante::getDocumento(){
    return this->documento;
  };
 

  void Estudiante::setDocumento(string documento ){
    this->documento = documento;
  };
 
  // DESTRUCTOR




  // DESTRUCTOR
  Estudiante::~Estudiante(){};