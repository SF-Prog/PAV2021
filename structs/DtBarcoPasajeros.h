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
    void setCantPasajeros(int);
    int getCantPasajeros();
    void setTamanio(TipoTamanio);
    TipoTamanio getTamanio();
    ~DtBarcoPasajeros();
    friend ostream& operator << (ostream&, const DtBarcoPasajeros&);
};

#endif