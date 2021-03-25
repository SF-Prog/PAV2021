#ifndef DTBARCOPESQUERO
#define DTBARCOPESQUERO
#include <string>
#include "DtFecha.h"
using namespace std;

class DtBarcoPesquero{
  private:
    int capacidad;
    int carga;
  public:
    void setCapacidad(int capacidad);
    void setCarga(int carga);
  
  ~DtBarcoPesquero();
  
};

#endif