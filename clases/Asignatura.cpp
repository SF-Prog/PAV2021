#include "Asignatura.h"

Asignatura::Asignatura(){};
Asignatura::Asignatura(string codigo, string nombre, DtInstanciaClase instanciaClase){
  this->codigo = codigo;
  this->nombre = nombre;
};

string Asignatura::getCodigo(){
  return this->codigo;
};
string Asignatura::getNombre(){
  return this->nombre;
};

void Asignatura::setCodigo(string codigo){
  this->codigo = codigo;
};
void Asignatura::setNombre(string nombre){
  this->nombre = nombre;
};
void Asignatura::agregarClase(Clase* clase){
  this->clases.insert(pair<int, Clase*>(clase->getId(), clase));
};

list<Clase*> Asignatura::getClases(){
  list<Clase*> res;
  for(map<int, Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
    //  DtInfoClase dtic = DtInfoClase(it->second->getId(), it->second->getNombre(), it->second->getDocentes());
     // en getDocentes() hay que ver la forma de retornar los docentes de clase
     res.push_front(it->second);
   };
  return res;
};

list<DtInfoClase> Asignatura::getDtInfoClase(){
  list<DtInfoClase> dticList;
  for(map<int, Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
    dticList.push_front(it->second->getDtInfoClase());
  };
  return dticList;
};

Asignatura::~Asignatura(){
  for(map<int, Clase*>::iterator it=this->clases.begin(); it!=this->clases.end(); it++){
    this->clases.erase(it);
    delete it->second;
  };
};