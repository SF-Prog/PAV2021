#ifndef PRACTICO
#define PRACTICO
#include "Clase.h"
#include "../datatypes/TimeStamp.h"
#include <string>


using namespace std;

class Practico: public Clase{
  private:
   
   
  public:
    Practico();
    Practico(int,string, TimeStamp, TimeStamp,string);

    
    // DESTRUCTOR
    ~Practico();
};

#endif