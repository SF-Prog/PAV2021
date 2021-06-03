#include "Perfil.h"

Perfil::Perfil(){};
Perfil::Perfil(string nombre, string imagen, string email,string password){
  this->nombre = nombre;
  this->imagenUrl = imagen;
  this->email = email;
  this->password = password;
};
string Perfil::getNombre(){
  return this->nombre;
};
string Perfil::getImagenUrl(){
  return this->imagenUrl;
};
string Perfil::getEmail(){
  return this->email;
};
string Perfil::getPassword(){
  return this->password;
};

void Perfil::setNombre(string nombre){
  this->nombre = nombre;
};
void Perfil::setImagenUrl(string imagen){
  this->imagenUrl = imagen;
};
void Perfil::setEmail(string email){
  this->email = email;
};
void Perfil::setPassword(string password){
  this->password = password;
};
  