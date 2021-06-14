#include "TimeStamp.h"

//Constructores
TimeStamp::TimeStamp(){}
TimeStamp::TimeStamp(int hora ,int min ,int segundos){
    this->hora = hora;
    this->min = min;
    this->segundos = segundos;
}
// Getters y Setters
int TimeStamp::getHora(){
    return this->hora;
}
int TimeStamp::getMin(){
    return this->min;
}
int TimeStamp::getSegundos(){
    return this->segundos;
}
void TimeStamp::setHora(int hora){
    this->hora = hora;
}
void TimeStamp::setMin(int min){
    this->min = min;
}
void TimeStamp::setSegundos(int segundos){
    this->segundos = segundos;
}
//Destructor
TimeStamp::~TimeStamp(){}