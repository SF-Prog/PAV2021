#ifndef ASISTEDIFERIDO
#define ASISTEDIFERIDO

#include <string>
#include "../datatypes/Log.h"
#include "Estudiante.h"

using namespace std;
class Estudiante;
class AsisteDiferido{
  private:
   Log acceso;
  public:
    // Constructores
    AsisteDiferido();
    AsisteDiferido(Log);
    
    // Getters y Setters
    Log getAcceso();
    void setAcceso(Log);
 
    // DESTRUCTOR
    ~AsisteDiferido();
};
#endif