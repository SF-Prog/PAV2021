#ifndef MONITOREO
#define MONITOREO

#include "ManejadorPerfil.h"
#include "Estudiante.h"
#include "Clase.h"
#include <string>


using namespace std;

class Monitoreo: public Clase{
  private:
    map<string, Estudiante*> estudiantes;
    list<string> habilitados;
  public:
    Monitoreo(int, string, Docente*, time_t, string, list<string>);
    // DESTRUCTOR
    ~Monitoreo();
};

#endif