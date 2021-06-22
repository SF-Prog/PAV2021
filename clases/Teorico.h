#ifndef TEORICO_H
#define TEORICO_H

#include "Clase.h"
//#include "Docente.h"
#include "../datatypes/DtInfoTeorico.h"
#include <string>

class Docente;

using namespace std;

class Teorico: public Clase{
  private:
    int cantAsistencias;
    list<Docente*> docentes;
  public:
    //Constructores
    Teorico();
    Teorico(string, time_t, time_t, string);
    Teorico(string, time_t, time_t, string, int);
    //Getters y Setters
    int getCantAsistencias();
    DtInfoTeorico* getDtinfoClase();
    void setCantAsistencias(int);
    // DESTRUCTOR
    ~Teorico();
};

#endif