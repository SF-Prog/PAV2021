#include "DtPerfil.h"

DtPerfil::DtPerfil(){}
DtPerfil::DtPerfil(string nombre, string imagenUrl, string email, string password){
    this->nombre = nombre;
    this->imagenUrl = imagenUrl;
    this->email = email;
    this->password = password;
}

// Getters and Setters
string DtPerfil::getNombre(){
    return this->nombre;
}
string DtPerfil::getImagenUrl(){
    return this->imagenUrl;
}
string DtPerfil::getEmail(){
    return this->email;
}
string DtPerfil::getPassword(){
    return this->password;
}
void DtPerfil::setNombre(string nombre){
    this->nombre = nombre;
}
void DtPerfil::setImagenUrl(string imagenUrl){
    this->imagenUrl = imagenUrl;
}
void DtPerfil::setEmail(string email){
    this->email = email;
}
void DtPerfil::setPassword(string password){
    this->password = password;
}

// Destructor
DtPerfil::~DtPerfil(){}