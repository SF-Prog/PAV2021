#ifndef MONITOREO
#define MONITOREO

#include "../manejadores/ManejadorPerfil.h"
#include "Clase.h"
#include <string>


using namespace std;

class Monitoreo: public Clase{
  private:
    list<string> habilitados;
  public:
    Monitoreo(int, string, Docente*, time_t, string, list<string>);
    // DESTRUCTOR
    ~Monitoreo();
};

#endif