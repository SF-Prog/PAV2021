#ifndef PARTICIPACION_H
#define PARTICIPACION_H

#include "../clases/Perfil.h"
#include "../datatypes/DtParticipacion.h"
#include <string>
#include <list>
#include <ctime>

using namespace std;

class Participacion{
  private:
    int id;
    time_t fecha;
    string mensaje;
    DtParticipacion* responde;
    list<Perfil*> perfiles;
  public:
    //Constructores
    Participacion();
    Participacion(int, time_t, string);
    Participacion(int, time_t, string, DtParticipacion*);
    //Getters y setters
    int getId();
    time_t getFecha();
    string getMensaje();
    DtParticipacion* getResponde();

    void setId(int);
    void setFecha(time_t);
    void setMensaje(string);
    void setResponde(DtParticipacion*);
    
    // DESTRUCTOR
    ~Participacion();
};

#endif