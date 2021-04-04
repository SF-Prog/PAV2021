#include "Puerto.h"


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
    
    // CONFIGURAR DATOS
    void Puerto::setId(string id){ this->id = id; };
    void Puerto::setNombre(string nombre){ this->nombre = nombre; };
    void Puerto::setFechaCreacion(DtFecha fechaCreacion){ this->fechaCreacion = fechaCreacion; };
    Arribo** Puerto::getArribos(){ return this->arribos.a; }
    int Puerto::getCantArribos(){ return this->arribos.tope; }

    // METODOS
    void Puerto::agregarArribo(Arribo* arribo){
      this->arribos.a[arribos.tope] = arribo;
      this->arribos.tope++;
    };

    void Puerto::borrarArribo(string idPuerto, DtFecha fecha){
      for(int i=0;i<this->arribos.tope;i++){
        while(i<this->arribos.tope && this->arribos.a[i]->getFecha()==fecha && this->getId()==idPuerto){
            this->arribos.a[i]=this->arribos.a[this->arribos.tope-1];
            this->arribos.a[this->arribos.tope-1]=NULL;
            delete this->arribos.a[this->arribos.tope-1];
            this->arribos.tope--;
        }
      }
    };



    // DESTRUCTOR
    Puerto::~Puerto(){};