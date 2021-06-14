#ifndef MONITOREO
#define MONITOREO
#include "Clase.h"
#include <string>


using namespace std;

class Monitoreo: public Clase{
  private:
   
   
  public:
    Monitoreo();
    Monitoreo(int,string, TimeStamp, TimeStamp,string);

    
    // DESTRUCTOR
    ~Monitoreo();
};

#endif