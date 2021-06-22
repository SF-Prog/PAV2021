#ifndef MONITOREO_H
#define MONITOREO_H

#include "../manejadores/ManejadorPerfil.h"
#include "../datatypes/DtInfoMonitoreo.h"
#include "Estudiante.h"
//#include "Docente.h"
#include "../clases/Clase.h"

#include <string>

using namespace std;

//class Estudiante;
class Docente;
class DtInfoMonitoreo;

class Monitoreo: public Clase{
  private:
    map<string, Estudiante*> estudiantes;
    list<string> habilitados;
  public:
    Monitoreo(string, Docente*, time_t, string, list<string>);
    DtInfoMonitoreo* getDtInfoClase();
    // DESTRUCTOR
    ~Monitoreo();
};

#endif