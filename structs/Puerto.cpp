#include "Puerto.h"

#include <string>


    Puerto::Puerto(){};
    Puerto::Puerto(string id, string nombre,DtFecha fechaCreacion){
      this->id = id;
      this->nombre = nombre;
      this->fechaCreacion = fechaCreacion;
    };
    
    // OBTENER DATOS
    string Puerto::getId(){ return this->id; };
    string Puerto::getNombre(){ return this->nombre; };
    DtFecha Puerto::getFechaCreacion(){ return this->fechaCreacion; };
    Arribo* Puerto::getArribos(){ return *this->arribos; };
    
    // CONFIGURAR DATOS
    void Puerto::setId(string id){ this->id = id; };
    void Puerto::setNombre(string nombre){ this->nombre = nombre; };
    void Puerto::setFechaCreacion(DtFecha fechaCreacion){ this->fechaCreacion = fechaCreacion;};
    void Puerto::setArribos(Arribo * arribo){ *this->arribos = arribo; };

    // METODOS
    void agregarPuerto(string id, string nombre, DtFecha fechaCreacion);


    // DESTRUCTOR
    Puerto::~Puerto(){};