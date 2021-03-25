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
DtFecha::~DtFecha(){}
