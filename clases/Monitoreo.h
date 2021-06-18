#ifndef MONITOREO
#define MONITOREO

#include "../manejadores/ManejadorPerfil.h"
#include "Estudiante.h"
#include "Clase.h"
#include <string>


using namespace std;

class Monitoreo: public Clase{
  private:
    map<string, Estudiante*> estudiantes;
    list<string> habilitados;
  public:
    Monitoreo(string, Docente*, time_t, string, list<string>);
    // DESTRUCTOR
    ~Monitoreo();
};

#endif