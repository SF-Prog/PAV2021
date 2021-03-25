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
    Barco * barcos;
  public:
    Arribo();
    Arribo(float a, DtFecha b, Barco * c);
    
    // OBTENER DATOS
    float getCarga();
    DtFecha getFecha();
    Barco * getBarcos();
    
    // CONFIGURAR DATOS
    void setCarga(float carga);
    void setFecha(DtFecha fecha);
    void setBarcos(Barco * barcos);

    ~Arribo();
};

#endif