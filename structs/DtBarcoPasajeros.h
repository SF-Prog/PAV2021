#ifndef DTBARCOPASAJEROS
#define DTBARCOPASAJEROS

#include "DtBarco.h"
#include "TipoTamanio.h"

#include <string>

using namespace std;

class DtBarcoPasajeros: DtBarco{
  private:
    int cantPasajeros;
    TipoTamanio tamanio;
  public:
    DtBarcoPasajeros();
    ~DtBarcoPasajeros();  
};

#endif