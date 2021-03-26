#ifndef PUERTO
#define PUERTO

#include <string>
#include "Arribo.h"

using namespace std;

class Puerto{
  private:
    string id;
    string nombre;
    DtFecha fechaCreacion;
    Arribo* arribos[30];
  public:
    Puerto();
    Puerto(string id, string nombre,DtFecha fechaCreacion);
    
    // OBTENER DATOS
    string getId();
    string getNombre();
    DtFecha getFechaCreacion();
    Arribo* getArribos();
    
    // CONFIGURAR DATOS
    void setId(string id);
    void setNombre(string nombre);
    void setFechaCreacion(DtFecha fechaCreacion);
    void setArribos(Arribo * arribo);

    // METODOS
    void agregarPuerto(string id, string nombre, DtFecha fechaCreacion);


    // DESTRUCTOR
    ~Puerto();
};

#endif