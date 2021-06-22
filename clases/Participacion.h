#ifndef PARTICIPACION_H
#define PARTICIPACION_H

#include "../clases/Perfil.h"
#include "../datatypes/DtParticipacion.h"
//#include <string>
#include <list>
#include <map>
#include <ctime>

using namespace std;

class Participacion{
  private:
    int id;
    static int idAutoGenerado;
    time_t fecha;
    char* mensaje;
    Participacion* responde;
    list<Perfil*> perfiles;
  public:
    //Constructores
    Participacion();
    Participacion(time_t, char*);
    Participacion(time_t, char*, Participacion*);
    //Getters y setters
    int getId();
    time_t getFecha();
    char* getMensaje();
    Participacion* getRespondeA();
    DtParticipacion* getDtRespondeA();
 //   Participacion * getRespondeA();

    void setFecha(time_t);
    void setMensaje(char*);
    void respondeA(Participacion*);
    
    // DESTRUCTOR
    ~Participacion();
};

#endif