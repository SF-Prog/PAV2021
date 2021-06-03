#include "Log.h"

Log::Log(){};
Log::Log(time_t incio, time_t fin){
    this->inicio = inicio;
    this->fin = fin;
};

// Getters and Setters
time_t Log::getInicio(){
    return this->inicio;
};
time_t Log::getFin(){
    return this->fin;
};
void Log::setInicio(time_t inicio){
    this->inicio = inicio;
};
void Log::setFin(time_t){
    this->fin = fin;
};

// Destructor
Log::~Log(){};