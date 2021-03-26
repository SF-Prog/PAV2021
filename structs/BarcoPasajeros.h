#ifndef BARCOPASAJEROS
#define BARCOPASAJEROS

#include "Barco.h"
#include "TipoTamanio.h"

#include <string>
using namespace std;

class BarcoPasajeros : public Barco {
  private:
    int cantPasajeros;
    TipoTamanio tamanio;
  public:
    BarcoPasajeros(string, string, int, TipoTamanio);
    void setCantPasajeros(int);
    void setTamanio(TipoTamanio);
    int getCantPasajeros();
    TipoTamanio getTamanio();
    void arribar(float);
    ~BarcoPasajeros();
  
};

#endif
