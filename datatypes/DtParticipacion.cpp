#include "DtParticipacion.h"

// Constructores
DtParticipacion::DtParticipacion(){}
DtParticipacion::DtParticipacion(int id, time_t fecha, string mensaje){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
}
DtParticipacion::DtParticipacion(int id, time_t fecha, string mensaje, DtParticipacion* responde){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
    this->responde = responde;
}

// Getters and Setters
int DtParticipacion::getId(){
    return this->id;
}
time_t DtParticipacion::getFecha(){
    return this->fecha;
}
string DtParticipacion::getMensaje(){
    return this->mensaje;
}
DtParticipacion* DtParticipacion::getResponde(){
    return this->responde;
}
void DtParticipacion::setId(int id){
    this->id = id;
}
void DtParticipacion::setFecha(time_t fecha){
    this->fecha = fecha;
}
void DtParticipacion::setMensaje(string mensaje){
    this->mensaje = mensaje;
}
void DtParticipacion::setResponde(DtParticipacion* responde){
    this->responde = responde;
}

// Destructor
DtParticipacion::~DtParticipacion(){}