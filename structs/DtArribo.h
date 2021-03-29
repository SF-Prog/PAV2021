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
    DtBarco * barco;
  public:
    DtArribo();
    DtArribo(float, DtFecha, DtBarco*);
    
    // OBTENER DATOS
    float getCarga();
    DtFecha getFecha();
    DtBarco* getBarco();
    
    // CONFIGURAR DATOS
    void setCarga(float);
    void setFecha(DtFecha);
    void setBarco(DtBarco*);

    friend ostream& operator <<(ostream&, const DtArribo&);
    ~DtArribo();
};

#endif