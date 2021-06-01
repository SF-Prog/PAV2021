#include "DtClaseAsignatura.h"

//Constructores
DtClaseAsignatura::DtClaseAsignatura(){}
DtClaseAsignatura::DtClaseAsignatura(string id, string nombre, Time promedioAsistencia){
    this->id = id;
    this->nombre = nombre;
    this->promedioAsistencia = promedioAsistencia;
}
// Getters y Setters
string DtClaseAsignatura::getId(){
    return this->id;
}
string DtClaseAsignatura::getNombre(){
    return this->nombre;
}
Time DtClaseAsignatura::getPromedioAsistencia(){
    return this->promedioAsistencia;
}
void DtClaseAsignatura::setId(string id){
    this->id = id;
}
void DtClaseAsignatura::setNombre(string nombre){
    this->nombre = nombre;
}
void DtClaseAsignatura::setPromedioAsistencia(Time promedioAsistencia){
    this->promedioAsistencia = promedioAsistencia;
}
//Destructor
DtClaseAsignatura::~DtClaseAsignatura();