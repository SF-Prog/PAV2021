#include "DtInfoClase.h"

DtInfoClase::DtInfoClase(){};
DtInfoClase::DtInfoClase(int id, string nombre, list<string> docentes){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
};
ostream& operator <<(ostream& salida, const DtInfoClase &dtic){
    list<string> docentes = dtic.docentes;
    cout<<dtic.id<<" - "<<dtic.nombre<<endl;
    for(list<string>::iterator it=docentes.begin(); it!=docentes.end(); it++){
        cout<<(*it)<<endl;
    };
    return salida;
};
DtInfoClase::~DtInfoClase(){};