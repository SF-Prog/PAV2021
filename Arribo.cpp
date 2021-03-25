#ifndef DTARRIBO
#define DTARRIBO
#include <string>
#include "DtFecha.h"
#include "DtBarco.h"
using namespace std;

class DtArribo{
  private:
    float carga;
    DtFecha fecha;
    DtBarco * barcos;
  public:
    DtArribo();
    DtArribo(float a, DtFecha b,DtBarco * c);
    
    // OBTENER DATOS
    float getCarga();
    DtFecha getFecha();
    DtBarco * getBarcos();
    
    // CONFIGURAR DATOS
    void setCarga(float carga);
    void setFecha(DtFecha fecha);
    void setBarcos(DtBarco * barcos);

    ~DtArribo();
};

#endif