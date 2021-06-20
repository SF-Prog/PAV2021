#include "Reloj.h"

Reloj::instancia = NULL
Reloj* getInstancia(){
    if (instancia == NULL)
        return new Reloj();
    else
        return instancia;
};