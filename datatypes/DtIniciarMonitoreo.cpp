#include "DtIniciarMonitoreo.h"

DtIniciarMonitoreo::DtIniciarMonitoreo(){};
DtIniciarMonitoreo::DtIniciarMonitoreo(string codigo, string nombre, time_t fechaHora, int id,
                                       list<string> habilitados):DtIniciarClaseFull(codigo, nombre, fechaHora, id){
    this->habilitados = habilitados;
};
list<string> DtIniciarMonitoreo::getHabilitados(){
    return this->habilitados;
};
void DtIniciarMonitoreo::setHabilitados(list<string> habilitados){
    this->habilitados = habilitados;
};
DtIniciarMonitoreo::~DtIniciarMonitoreo(){};
