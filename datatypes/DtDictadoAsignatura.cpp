#include "DtDictadoAsignatura.h"

//Constructores
DtDictadoAsignatura::DtDictadoAsignatura(){}
DtDictadoAsignatura::DtDictadoAsignatura(string codigo, string nombre, Time tiempoTotal){
    this->codigo = codigo;
    this->nombre = nombre;
    this->tiempoTotal = tiempoTotal;
}
// Getters y Setters
string DtDictadoAsignatura::getCodigo(){
    return this->codigo;
}
string DtDictadoAsignatura::getNombre(){
    return this->nombre;
}
Time DtDictadoAsignatura::getTiempoTotal(){
    return this->tiempoTotal;
}
void DtDictadoAsignatura::setCodigo(string codigo){
    this->codigo = codigo;
}
void DtDictadoAsignatura::setNombre(string nombre){
    this->nombre = nombre;
}
void DtDictadoAsignatura::setTiempoTotal(Time tiempoTotal){
    this->tiempoTotal = tiempoTotal;
}
//Destructor
DtDictadoAsignatura::~DtDictadoAsignatura(){}