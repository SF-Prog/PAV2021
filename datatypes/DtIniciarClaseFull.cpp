#include "DtIniciarClaseFull.h"

DtIniciarClaseFull::DtIniciarClaseFull(){};
DtIniciarClaseFull::DtIniciarClaseFull(string codigo, string nombre, time_t fechaHora, int id):
                                        DtIniciarClase(codigo, nombre, fechaHora){
    this->id = id;
};
int DtIniciarClaseFull::getId(){
    return this->id;
};
void DtIniciarClaseFull::setId(int id){
    this->id = id;
};
DtIniciarClaseFull::~DtIniciarClaseFull(){};
