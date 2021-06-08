#include "Monitoreo.h"

Monitoreo::Monitoreo(int id, string nom, Docente* doc, time_t fecha, string codigo, list<string> habs):Clase(id, nom, doc, fecha, codigo){
    this->habilitados = habs;
    ManejadorPerfil* mP = ManejadorPerfil::getInstancia();
    mP->
};
// DESTRUCTOR
Monitoreo::~Monitoreo(){};