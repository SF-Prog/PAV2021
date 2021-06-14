#ifndef PARTICIPACION
#define PARTICIPACION

#include <string>
#include "../clases/Perfil.h"
#include "../datatypes/TimeStamp.h"
using namespace std;


class Participacion{
  private:
    int id;
    TimeStamp fecha;
    string mensaje;
    Participacion* respuesta;
    Perfil * perfil;
  public:
    Participacion();
    Participacion(int,string, TimeStamp, Perfil*);
    int getId();
    TimeStamp getFecha();
    string getMensaje();
    Participacion* getParticipacion();
    Perfil* getPerfil();
    
    void setId(int);
    void setFecha(TimeStamp);
    void setMensaje(string);
    void setParticipacion(Participacion*);
    void setPerfil(Perfil);

    // DESTRUCTOR
    ~Participacion();
};

#endif // PARTICIPACION
