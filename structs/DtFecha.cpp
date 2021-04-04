#include "DtFecha.h"

DtFecha::DtFecha(){}
DtFecha::DtFecha(int dia,int mes,int anio){
  this->dia=dia;
  this->mes=mes;
  this->anio=anio;
}
int DtFecha::getDia(){
  return this->dia;
}
void DtFecha::setDia(int dia){
  this->dia=dia;
}
int DtFecha::getMes(){
  return this->mes;
}
void DtFecha::setMes(int mes){
  this->mes=mes;
}
int DtFecha::getAnio(){
  return this->anio;
}
void DtFecha::setAnio(int anio){
  this->anio=anio;
}

ostream& operator <<(ostream& salida, const DtFecha& fecha){
  salida << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
  return salida;
}

bool operator ==(const DtFecha& f1,const DtFecha& f2){
    return f1.dia==f2.dia && f1.mes==f2.mes && f1.anio==f2.anio;
}

DtFecha::~DtFecha(){}
