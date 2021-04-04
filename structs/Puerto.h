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
    struct arribosStruct {
      Arribo* a[30];
      int tope = 0;
    } arribos;
  public:
    Puerto();
    Puerto(string, string, DtFecha);
    
    // OBTENER DATOS
    string getId();
    string getNombre();
    DtFecha getFechaCreacion();
    Arribo** getArribos();
    int getCantArribos();
    
    // CONFIGURAR DATOS
    void setId(string);
    void setNombre(string);
    void setFechaCreacion(DtFecha);

    // METODOS
    void agregarArribo(Arribo*);
    void borrarArribo(string, DtFecha);

    // DESTRUCTOR
    ~Puerto();
};

#endif