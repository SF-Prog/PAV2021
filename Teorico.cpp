#include "Teorico.h"

//Contructores
Teorico::Teorico(){};
Teorico::Teorico(int cantAsistentes):Clase(id, nombre, inicio, fin, rutaVideo){
  this->cantAsistencias = cantAsistencias;
};
//Getters y Setters
int Teorico::getCantAsistencias(){
  return this->cantAsistencias;
};
void Teorico::setCantAsistencias(int cantAsistencias){
  this->cantAsistencias = cantAsistencias;
};
// DESTRUCTOR
Teorico::~Teorico(){};