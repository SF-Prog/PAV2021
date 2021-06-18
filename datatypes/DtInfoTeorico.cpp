#include "DtInfoTeorico.h"

DtInfoTeorico::DtInfoTeorico(){};
DtInfoTeorico::DtInfoTeorico(int id, string nombre, list<Docente*> docentes, int cantAsistentes):DtInfoClase(id, nombre, docentes){
    this->cantAsistentes = cantAsistentes;
};
void DtInfoTeorico::setCantAsistentes(int cant){ this->cantAsistentes = cant; };
int DtInfoTeorico::getCantAsistentes(){ return this->cantAsistentes;};
DtInfoTeorico::~DtInfoTeorico(){};

ostream& operator<<(ostream& salida, DtInfoTeorico dtim){
    salida<<(DtInfoClase)dtim<<" - "<< dtim.cantAsistentes;
    return salida;
};