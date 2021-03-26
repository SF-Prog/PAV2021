#ifndef DTBARCOPESQUERO
#define DTBARCOPESQUERO

#include "DtFecha.h"
#include "DtBarco.h"

#include <string>
using namespace std;

class DtBarcoPesquero : DtBarco{
  private:
    int capacidad;
    int carga;
  public:
    DtBarcoPesquero();
    void setCapacidad(int capacidad);
    void setCarga(int carga);  
    ~DtBarcoPesquero();
  
};

#endif