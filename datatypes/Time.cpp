#include "Time.h"

//Constructores
Time::Time(){}
Time::Time(int hora ,int min ,int segundos){
    this->hora = hora;
    this->min = min;
    this->segundos = segundos;
}
// Getters y Setters
int Time::getHora(){
    return this->hora;
}
int Time::getMin(){
    return this->min;
}
int Time::getSegundos(){
    return this->segundos;
}
void Time::setHora(int hora{
    this->hora = hora;
}
void Time::setMin(int min){
    this->min = min;
}
void Time::setSegundos(int segundos){
    this->segundos = segundos;
}
//Destructor
Time::~Time(){}