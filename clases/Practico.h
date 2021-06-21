#ifndef PRACTICO_H
#define PRACTICO_H
#include "Clase.h"
#include "Docente.h"
#include "../datatypes/DtInfoClase.h"
#include <string>

class DtInfoClase;
using namespace std;

class Practico: public Clase{
  private:
  public:
    Practico(string, time_t, time_t, string);
    DtInfoClase getDtinfoClase();
    // DESTRUCTOR
    ~Practico();
};

#endif