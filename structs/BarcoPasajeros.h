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
    int getCantPasajeros();
    void setTamanio(TipoTamanio);
    TipoTamanio getTamanio();
    void arribar(float);
    ~BarcoPasajeros();
    friend ostream& operator << (ostream&, const BarcoPasajeros&);
};

#endif
