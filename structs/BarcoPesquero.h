#ifndef DTBARCO
#define DTBARCO

#include "Barco.h"

#include <string>

using namespace std;

class BarcoPesquero : public Barco{
  private:
    int capacidad;
    int carga;
  public:
    BarcoPesquero(string, string, int, int);
    void setCapacidad(int);
    void setCarga(int);
    int getCapacidad();
    int getCarga();
  
   ~BarcoPesquero();
  
};

#endif