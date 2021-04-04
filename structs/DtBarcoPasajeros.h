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
    void setTamanio(TipoTamanio);
    int getCantPasajeros();
    TipoTamanio getTamanio();
    friend ostream& operator << (ostream&, const DtBarcoPasajeros&);
    ~DtBarcoPasajeros();
};

#endif