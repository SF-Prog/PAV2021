#include "../datatypes/DtIniciarClase.h"

DtIniciarClase::DtIniciarClase(){};
DtIniciarClase::DtIniciarClase(string codigo,string nombre ,TimeStamp fecha){
    this->codigo = codigo;
    this->nombre = nombre;
    this->fechaHora = fecha;
};
string DtIniciarClase::getCodigo(){
    return this->codigo;
};
string DtIniciarClase::getNombre(){
    return this->nombre;
};
TimeStamp DtIniciarClase::getFechaHora(){
    return this->fechaHora;
};

void DtIniciarClase::setCodigo(string codigo){
    this->codigo = codigo;
};
void DtIniciarClase::setNombre(string nombre){
    this->nombre = nombre;
};
void DtIniciarClase::setFechaHora(TimeStamp fecha){
    this->fechaHora = fecha;
};

// DESTRUCTOR
DtIniciarClase::~DtIniciarClase();