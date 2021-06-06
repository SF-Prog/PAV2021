#ifndef CLASE
#define CLASE

#include "Docente.h"
#include "../datatypes/DtInfoClase.h"
#include <string>
#include <map>
#include <ctime>

using namespace std;

class Clase{
  protected:
    int id;
    string nombre;
    map<string, Docente*> docentes;
    time_t inicio;
    time_t fin;
    string rutaVideo;
   
  public:
    Clase();
    Clase(int, string, time_t, time_t, string);
    Clase(int, string, map<string, Docente*>, time_t, time_t, string);
    int getId();
    string getNombre();
    map<string, Docente*> getDocentes();
    void addDocente(Docente*);
    time_t getInicio();
    time_t getFin();
    string getRutaVideo();
    DtInfoClase getDtInfoClase();
    
    void setId(int);
    void setNombre(string );
    void setInicio(time_t);
    void setFin(time_t );
    void setRutaVideo(string );
    // DESTRUCTOR
   virtual ~Clase();
};

#endif