#ifndef ASISTEDIFERIDO
#define ASISTEDIFERIDO

#include <string>
#include "Log.h"

using namespace std;

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