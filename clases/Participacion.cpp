#include "Participacion.h"

Participacion::Participacion(){};
Participacion::Participacion(int id,string mensaje, TimeStamp fecha,Perfil* usuario){
    this->id =id;
    this->fecha = fecha;
    this->mensaje = mensaje;
    this->perfil = usuario;
};
int Participacion::getId(){
    return this->id;
};
TimeStamp Participacion::getFecha(){
    return this->fecha;
};
string Participacion::getMensaje(){
    return this->mensaje;
};
Participacion* Participacion::getParticipacion(){
    return this->respuesta; 
};
Perfil* Participacion::getPerfil(){
    return this->perfil;
};

void Participacion::setId(int id){
    this->id = id;
};
void Participacion::setFecha(TimeStamp fehca){
    this->fecha = fecha;
};
void Participacion::setMensaje(string mensaje){
    this->mensaje = mensaje;
};
void Participacion::setParticipacion(Paticipacion* respuesta){
    this->respuesta = respuesta;
};
void Participacion::setPerfil(Perfil* perfil){
    this->perfil = perfil;
};

// DESTRUCTOR
Participacion::~Participacion();