#include "Asignatura.h"
#include "../clases/Teorico.h"
#include "../clases/Monitoreo.h"

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

list<DtInfoClase*> Asignatura::getDtInfoClase(){
  list<DtInfoClase*> dticList;
  Monitoreo* m;
  Teorico* t;
  for(map<int, Clase*>::iterator it = this->clases.begin(); it!=this->clases.end(); it++){
    m = dynamic_cast<Monitoreo*>(it->second);
    if (m!=NULL)
      dticList.push_front(m->getDtInfoClase());
    else{
      t = dynamic_cast<Teorico*>(it->second);
      if (t!=NULL)
        dticList.push_front(t->getDtInfoClase());
      else
        dticList.push_front(it->second->getDtInfoClase());
    }
  };
  return dticList;
};

Asignatura::~Asignatura(){
  cout<<"aca se destruye la asignatura"<<endl;
  for(map<int, Clase*>::iterator it=this->clases.begin(); it!=this->clases.end(); it++){
    Clase* c = it->second;
    this->clases.erase(it);
    delete c;
  };
};