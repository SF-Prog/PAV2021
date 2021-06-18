#include  "DtAsignatura.h"

//Constructores

DtAsignatura::DtAsignatura() {}
DtAsignatura::DtAsignatura(string codigo, string nombre, DtInstanciaClase tipoClase) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->tipoClase = tipoClase;
}

// Getters and Setters

string DtAsignatura::getNombre() {
    return this->nombre;
}
string DtAsignatura::getCodigo() {
    return this->codigo;
}
DtInstanciaClase DtAsignatura::getTipoClase() {
    return this->tipoClase;
}
void DtAsignatura::setNombre(string nombre) {
    this->nombre = nombre;
}
void DtAsignatura::setCodigo(string codigo) {
    this->codigo = codigo;
}
void DtAsignatura::setTipoClase(DtInstanciaClase tipoClase) {
    this->tipoClase = tipoClase;
}
// Destructor 

DtAsignatura::~DtAsignatura(){}