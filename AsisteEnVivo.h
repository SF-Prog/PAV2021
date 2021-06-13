#ifndef ASISTEENVIVO
#define ASISTEENVIVO

#include <string>
#include <ctime>
#include "Estudiante.h"


using namespace std;

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
