#ifndef ARRIBO
#define ARRIBO

#include <string>
#include "DtFecha.h"
#include "Barco.h"

using namespace std;

class Arribo{
  private:
    float carga;
    DtFecha fecha;
    Barco* barco;
  public:
    Arribo();
    Arribo(DtFecha, float);
    
    // OBTENER DATOS
    float getCarga();
    DtFecha getFecha();
    Barco* getBarco();
    
    // CONFIGURAR DATOS
    void setCarga(float);
    void setFecha(DtFecha);

    void agregarBarco(Barco*);

    ~Arribo();
};

#endif