#include  "DtInstanciaClase.h"

//Constructores

DtInstanciaClase::DtInstanciaClase() {}
DtInstanciaClase::DtInstanciaClase(bool teorico, bool practico,bool monitoreo) {
    this->teorico = teorico;
    this->practico = practico;
    this->monitoreo = monitoreo;
}

// Getters and Setters

bool DtInstanciaClase::getTeorico() {
    return this->teorico;
}
bool DtInstanciaClase::getPractico() {
    return this->practico;
}
bool DtInstanciaClase::getMonitoreo() {
    return this->monitoreo;
}
void DtInstanciaClase::setTeorico(bool teorico) {
    this->teorico = teorico;
}
void DtInstanciaClase::setPractico(bool practico) {
    this->practico = practico;
}
void DtInstanciaClase::setMonitoreo(bool monitoreo) {
    this->monitoreo = monitoreo;
}
// Destructor 

DtInstanciaClase::~DtInstanciaClase(){}