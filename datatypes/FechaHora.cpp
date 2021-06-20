#include "FechaHora.h"

//Constructores
FechaHora::FechaHora(){}
FechaHora::FechaHora(int hora ,int min ,int segundos,int dia,int mes, int anio){
    this->hora = hora;
    this->min = min;
    this->segundos = segundos;
}
// Getters y Setters
int FechaHora::getHora(){
    return this->hora;
}
int FechaHora::getMin(){
    return this->min;
}
int FechaHora::getSegundos(){
    return this->segundos;
}
int FechaHora::getAnio(){
    return this->hora;
}
int FechaHora::getMes(){
    return this->min;
}
int FechaHora::getDia(){
    return this->segundos;
}
void FechaHora::setHora(int hora){
    this->hora = hora;
}
void FechaHora::setMin(int min){
    this->min = min;
}
void FechaHora::setSegundos(int segundos){
    this->segundos = segundos;
}
void FechaHora::setAnio(int hora){
    this->hora = hora;
}
void FechaHora::setMes(int min){
    this->min = min;
}
void FechaHora::setDia(int segundos){
    this->segundos = segundos;
}
//Destructor
FechaHora::~FechaHora(){}