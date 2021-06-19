#include "DtIniciarClaseFull.h"
int DtIniciarClaseFull::idAutoGenerado = 1;
DtIniciarClaseFull::DtIniciarClaseFull(){};
DtIniciarClaseFull::DtIniciarClaseFull(string codigo, string nombre, time_t fechaHora):
                                        DtIniciarClase(codigo, nombre, fechaHora){
    this->id = idAutoGenerado;
    idAutoGenerado++;
};
int DtIniciarClaseFull::getId(){
    return this->id;
};
void DtIniciarClaseFull::setId(int id){
    this->id = id;
};
DtIniciarClaseFull::~DtIniciarClaseFull(){};
