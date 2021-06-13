#include "DtIniciarClase.h"

DtIniciarClase::DtIniciarClase(){};
DtIniciarClase::DtIniciarClase(string codigo, string nombre, time_t fechaHora){
    this->codigo = codigo;
    this->nombre = nombre;
    this->fechaHora = fechaHora;
};
string DtIniciarClase::getCodigo(){
    return this->codigo;
};
string DtIniciarClase::getNombre(){
    return this->nombre;
};
time_t DtIniciarClase::getFechaHora(){
    return this->fechaHora;
};
void DtIniciarClase::setCodigo(string codigo){
    this->codigo = codigo;
};
void DtIniciarClase::setNombre(string nombre){
    this->nombre = nombre;
};
void DtIniciarClase::setFechaHora(time_t fechaHora){
    this->fechaHora = fechaHora;
};
DtIniciarClase::~DtIniciarClase(){};
