#ifndef ASISTEDIFERIDO
#define ASISTEDIFERIDO

#include <string>
#include "../datatypes/Log.h"

using namespace std;

class AsisteDiferido{
  private:
   Log acceso;

   
  public:
    AsisteDiferido();
    AsisteDiferido(Log);
    
    Log getLog();


    void setLog(Log);
 
    
    // DESTRUCTOR
    ~AsisteDiferido();
};

#endif