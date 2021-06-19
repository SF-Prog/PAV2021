#ifndef TEORICO
#define TEORICO
#include "Clase.h"
#include <string>


using namespace std;

class Teorico: public Clase{
  private:
    int cantAsistencias;
  public:
    //Constructores
    Teorico();
    Teorico(string, time_t, time_t, string);
    Teorico(string, time_t, time_t, string, int);
    //Getters y Setters
    int getCantAsistencias();
    void setCantAsistencias(int);
    // DESTRUCTOR
    ~Teorico();
};

#endif