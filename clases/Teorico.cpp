#include "Teorico.h"

  Teorico::Teorico(){};
  Teorico::Teorico(int id ,string nombre, TimeStamp inicio, TimeStamp fin,string rutaVideo,int cantAsistencias):Clase(id ,nombre,inicio,fin,rutaVideo){
   this->cantAsistencias;
  };
 
 
  // DESTRUCTOR

//Getters y Setters
int Teorico::getCantAsistencias(){
  return this->cantAsistencias;
};
void Teorico::setCantAsistencias(int cantAsistencias){
  this->cantAsistencias = cantAsistencias;
};
// DESTRUCTOR
Teorico::~Teorico(){};



  // DESTRUCTOR
  Teorico::~Teorico(){};