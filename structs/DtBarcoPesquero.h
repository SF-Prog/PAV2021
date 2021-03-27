#ifndef DTBARCOPESQUERO
#define DTBARCOPESQUERO

#include "DtFecha.h"
#include "DtBarco.h"

#include <string>
using namespace std;

class DtBarcoPesquero : public DtBarco{
  private:
    int capacidad;
    int carga;
  public:
    DtBarcoPesquero();
    DtBarcoPesquero(string, string, int, int);
    void setCapacidad(int capacidad);
    int getCapacidad();
    void setCarga(int carga);  
    int getCarga();
    ~DtBarcoPesquero();
    friend ostream& operator << (ostream&, const DtBarcoPesquero&);

};

#endif