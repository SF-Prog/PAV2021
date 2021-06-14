#include "Clase.h"

  int Clase::idAutoGenerado = 1;
  Clase::Clase(){};
  Clase::Clase(string nombre, time_t inicio, time_t fin,string codigo){
    this->id = idAutoGenerado;
    idAutoGenerado++;
    this->nombre = nombre;
    this->inicio = inicio;
    this->fin = fin;
    this->codigo = codigo;
  };
  Clase::Clase(string nombre, Docente* docente, time_t inicio, string codigo){
    this->id = id;
    this->nombre = nombre;
    this->docentes.push_front(docente);
    this->inicio = inicio;
    this->codigo = codigo;
  };
  Clase::Clase(string nombre, list<Docente*> docentes, time_t inicio, time_t fin,string codigo){
    this->id = id;
    this->nombre = nombre;
    this->docentes = docentes;
    this->inicio = inicio;
    this->fin = fin;
    this->codigo = codigo;
  };

  int Clase::getId(){
    return this->id;
  };
  string Clase::getNombre(){
    return this->nombre;
  };
  list<Docente*> Clase::getDocentes(){
    return this->docentes;
  };
  void Clase::addDocente(Docente* docente){
    this->docentes.push_front(docente);
  };
  void Clase::addParticipacion(Participacion* p){
    this->participaciones.push_front(p);
  };
  list<AsisteEnVivo*> Clase::getAsistenciasEnVivo(){
    return this->asistenciasEnVivo;
  };
  void Clase::addAsistenciasEnVivo(AsisteEnVivo* asistenciasEnVivo){
    this->asistenciasEnVivo.push_front(asistenciasEnVivo);
  };
  list<Participacion*> Clase::getParticipaciones(){
    return this->participaciones;
  }
  time_t Clase::getInicio(){
    return this->inicio;
  };
  time_t Clase::getFin(){
    return this->fin;
  };
  string Clase::getCodigo(){
    return this->codigo;
  };
  DtInfoClase Clase::getDtInfoClase(){
    return DtInfoClase(this->id, this->nombre, this->docentes);
  };

  void Clase::setId(int id){
    this->id = id;
  };
  void Clase::setNombre(string nombre ){
    this->nombre = nombre;
  };
  void Clase::setInicio(time_t inicio){
    this->inicio = inicio;
  };
  void Clase::setFin(time_t  fin){
    this->fin = fin;
  };
  void Clase::setCodigo(string codigo){
      this->codigo = codigo;
  };
  Clase::~Clase(){}
  