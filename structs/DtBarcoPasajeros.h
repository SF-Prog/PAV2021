#ifndef DTBARCOPASAJEROS
#define DTBARCOPASAJEROS

#include "DtBarco.h"
#include "TipoTamanio.h"

#include <string>

using namespace std;

class DtBarcoPasajeros: public DtBarco{
  private:
    int cantPasajeros;
    TipoTamanio tamanio;
  public:
    DtBarcoPasajeros();
    DtBarcoPasajeros(string, string, int, TipoTamanio);
    setCantPasajeros(int cantPasajeros);
    getCantPasajeros();
    setTamanio(TipoTamanio tamanio);
    getTamanio();
    ~DtBarcoPasajeros();  
};

#endif