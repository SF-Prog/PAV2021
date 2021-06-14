#ifndef ASISTEENVIVO
#define ASISTEENVIVO

#include <string>
#include "../datatypes/TimeStamp.h"

using namespace std;

class AsisteEnVivo{
  private:
   TimeStamp inicio;
   TimeStamp fin;
   
  public:
    AsisteEnVivo();
    AsisteEnVivo(TimeStamp,TimeStamp);
    
    TimeStamp getInicio();
    TimeStamp getFin();

    void setInicio(TimeStamp);
    void setFin(TimeStamp);

    
    // DESTRUCTOR
    ~AsisteEnVivo();
};

#endif