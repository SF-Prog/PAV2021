#include "DtClaseAsistencia.h"

//Constructores
DtClaseAsistencia::DtClaseAsistencia(){}
DtClaseAsistencia::DtClaseAsistencia(int id, string nombre, Time promedioAsistencia){
    this->id = id;
    this->nombre = nombre;
    this->promedioAsistencia = promedioAsistencia;
}
// Getters y Setters
int DtClaseAsistencia::getId(){
    return this->id;
}
string DtClaseAsistencia::getNombre(){
    return this->nombre;
}
Time DtClaseAsistencia::getPromedioAsistencia(){
    return this->promedioAsistencia;
}
void DtClaseAsistencia::setId(int id){
    this->id = id;
}
void DtClaseAsistencia::setNombre(string nombre){
    this->nombre = nombre;
}
void DtClaseAsistencia::setPromedioAsistencia(Time promedioAsistencia){
    this->promedioAsistencia = promedioAsistencia;
}
//Destructor
DtClaseAsistencia::~DtClaseAsistencia(){};