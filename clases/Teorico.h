#ifndef TEORICO
#define TEORICO
#include "Clase.h"
#include <string>


using namespace std;

class Teorico: public Clase{
  private:
    string instituto;
   
   
  public:
    Teorico();
    Teorico(int,string, TimeStamp, TimeStamp,string);

    
    // DESTRUCTOR
    ~Teorico();
};

#endif