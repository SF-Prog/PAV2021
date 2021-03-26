#include "DtBarco.h"

DtBarco::DtBarco(){};
DtBarco::DtBarco(string id, string nombre){
    this->id = id;
    this->nombre = nombre;
};
string DtBarco::getId(){ return this->id; };
DtBarco::~DtBarco(){};
ostream& operator <<(ostream& retorno,const DtBarco&){};


