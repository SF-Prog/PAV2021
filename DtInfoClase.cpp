#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, list<Docente*> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};