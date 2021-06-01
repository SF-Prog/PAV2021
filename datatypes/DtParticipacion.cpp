#include "DtParticipacion"

// Constructores
DtParticipacion::DtParticipacion(){}
DtParticipacion::DtParticipacion(int id, timeStamp fecha, string mensaje, DtParticipacion respuesta){
    this->id = id;
    this->fecha = fecha;
    this->mensaje = mensaje;
    this->respuesta = respuesta;
}

// Getters and Setters
int DtParticipacion::getId(){
    return this->id;
}
timeStamp DtParticipacion::getFecha(){
    return this->fecha;
}
string DtParticipacion::getMensaje(){
    return this->mensaje;
}
DtParticipacion DtParticipacion::getResponde(){
    return this->respuesta;
}
void DtParticipacion::setId(int id){
    this->id = id;
}
void DtParticipacion::setFecha(timeStamp fecha){
    this->fecha = fecha;
}
void DtParticipacion::setMensaje(string mensaje){
    this->mensaje = mensaje;
}
void DtParticipacion::setResponde(DtParticipacion respuesta){
    this->respuesta = respuesta;
}

// Destructor
DtParticipacion::~DtParticipacion(){}