#include "DtClase.h"

//Constructor
DtClase::DtClase(){}
DtClase::DtClase(int id, string nombre,tipoRol tipo,timeStamp inicio){
    this->id = id;
    this->nombre = nombre;
    this->tipo = tipo;
    this->inicio = inicio;
}
// Getters and Setters
int DtClase::getId(){
    return this->id;
}
string DtClase::getNombre(){
    return this->nombre;
}
tipoRol DtClase::getTipo(){
     eturn this->tipo;
}
timeStamp DtClase::getInicio(){
    return this->inicio;
}
void DtClase::setId(int id){
    this->id = id;
}
void DtClase::setNombre(string nombre){
    this->nombre = nombre;
}
void DtClase::setTipo(tipoRol tipo){
    this->tipo = tipo;
}
void DtClase::setInicio(timeStamp inicio){
    this->inicio = inicio;
}
// Destructor
DtClase::~DtClase(){}