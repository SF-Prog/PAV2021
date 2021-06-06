#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, map<string, Docente*> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};