#include "Participacion.h"

int Participacion::idAutoGenerado=1;
Participacion::Participacion(){};
Participacion::Participacion(time_t fecha, char mensaje[50]){
    this->id=idAutoGenerado;
    idAutoGenerado++;
    this->fecha=fecha;
    this->mensaje=mensaje;
};
Participacion::Participacion(time_t fecha, char* mensaje,Participacion * responde){
    this->id=idAutoGenerado;
    idAutoGenerado++;
    this->fecha=fecha;
    this->mensaje=mensaje;
    cout << "MENSAJE DE PARTICIPACION CONTRUCTOR" << mensaje << endl;
    this->responde = responde;
};
//Getters y setters
int Participacion::getId(){
    return this->id;
};
time_t Participacion::getFecha(){
    return this->fecha;
};
char* Participacion::getMensaje(){
    return this->mensaje;
};
void Participacion::setFecha(time_t fecha){
    this->fecha = fecha;
};
void Participacion::setMensaje(char* mensaje){
    this->mensaje=mensaje;
};
void Participacion::respondeA(Participacion* p){
    this->responde = p;
};
Participacion* Participacion::getRespondeA(){
    return this->responde;
}; 
/*
list<DtParticipacion*> Participacion::getRespuestas(){
    list<DtParticipacion> dtParticipaciones;
    for(map<int, Participacion*>::iterator it=this->enRespuesta.begin(); it!=this->enRespuesta.end(); it++){
        dtParticipaciones.push_front(DtParticipacion(it->second->getId(), it->second->getFecha(), it->second->getResponde()));
    };
    return dtParticipaciones;
}*/
DtParticipacion* Participacion::getResponde(){
    return new DtParticipacion(this->getId(), this->getFecha(), this->getMensaje(), this->getResponde());
};

// DESTRUCTOR
Participacion::~Participacion(){
    delete this->responde;
};