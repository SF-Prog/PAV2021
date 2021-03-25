#include "Barco.h"

#include <string>

Barco::Barco(string nombre, string id){
  this->nombre = nombre;
  this->id = id;
}    
void Barco::setNombre(string nombre){ this->nombre = nombre; };
void Barco::setId(string id){ this->id = id; }
string Barco::getNombre(){ return this->nombre; }
string Barco::getId(){ return this->id; }

ostream& operator <<(ostream& salida, const Barco&){
  cout<<"barco.cpp"<<endl;

  return salida;
};
