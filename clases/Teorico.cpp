#include "Teorico.h"

//Contructores
Teorico::Teorico(){};
Teorico::Teorico(string nombre, time_t inicio, time_t fin, string codigo, int cantAsistentes):Clase(nombre, inicio, fin, codigo){
  this->cantAsistencias = cantAsistencias;
};
Teorico::Teorico(string nombre, time_t inicio, time_t fin, string codigo):Clase(nombre, inicio, fin, codigo){
  this->cantAsistencias = 0;
};
//Getters y Setters
int Teorico::getCantAsistencias(){
  return this->cantAsistencias;
};
void Teorico::setCantAsistencias(int cantAsistencias){
  this->cantAsistencias = cantAsistencias;
};
// DESTRUCTOR
Teorico::~Teorico(){
  //delete todos los AsisteEnVivo, AsisteDiferido, 
};