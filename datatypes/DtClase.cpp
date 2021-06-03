#include "DtClase.h"

//Constructor
DtClase::DtClase(){}
DtClase::DtClase(int id, string nombre,TipoRol tipo,time_t inicio){
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
TipoRol DtClase::getTipo(){
     return this->tipo;
}
time_t DtClase::getInicio(){
    return this->inicio;
}
void DtClase::setId(int id){
    this->id = id;
}
void DtClase::setNombre(string nombre){
    this->nombre = nombre;
}
void DtClase::setTipo(TipoRol tipo){
    this->tipo = tipo;
}
void DtClase::setInicio(time_t inicio){
    this->inicio = inicio;
}
// Destructor
DtClase::~DtClase(){}