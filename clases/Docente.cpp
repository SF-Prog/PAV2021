#include "Docente.h"

  Docente::Docente(){};
  Docente::Docente(string nombre, string imagen, string email,string password,string instituto):Perfil(nombre, imagen, email, password){
    this->instituto = instituto;
   
  };
  string Docente::getInstituto(){
    return this->instituto;
  };
 

  void Docente::setInstituto(string instituto ){
    this->instituto = instituto;
  };
 
  // DESTRUCTOR




  // DESTRUCTOR
  Docente::~Docente(){};