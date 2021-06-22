#ifndef ASISTEENVIVO
#define ASISTEENVIVO

#include <string>
#include <ctime>

#include "Perfil.h"

using namespace std;

class Estudiante;

class AsisteEnVivo{
  private:
    Estudiante* estudiante;
    time_t inicio;
    time_t fin;
   
  public:
    AsisteEnVivo();
    AsisteEnVivo(time_t, time_t);
    AsisteEnVivo(time_t, time_t, Estudiante*);
    
    time_t getInicio();
    time_t getFin();
    Estudiante* getEstudiante();

    void setInicio(time_t);
    void setFin(time_t);

    
    // DESTRUCTOR
    ~AsisteEnVivo();
};
#endif
