#ifndef PRACTICO
#define PRACTICO
#include "Clase.h"
#include <string>


using namespace std;

class Practico: public Clase{
  private:
  public:
    Practico(string, time_t, time_t, string);
    // DESTRUCTOR
    ~Practico();
};

#endif