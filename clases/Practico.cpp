#include "Practico.h"

Practico::Practico(string nombre, time_t inicio, time_t fin, string codigo):Clase(nombre, inicio, fin, codigo){};
DtInfoClase Practico::getDtinfoClase(){
    list<Docente*> docentes = this->getDocentes();
    list<string> emailDocentes;
    DtInfoClase dtic;
    for(list<Docente*>::iterator it=docentes.begin(); it!=docentes.end(); it++){
        emailDocentes.push_front((*it)->getEmail());
    };
    return DtInfoClase(this->getId(), this->getNombre(), emailDocentes);
};
// DESTRUCTOR
Practico::~Practico(){};