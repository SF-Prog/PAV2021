#ifndef CLASE
#define CLASE

#include <string>
#include <ctime>

using namespace std;

class Clase{
  protected:
    int id;
    string nombre;
    time_t inicio;
    time_t fin;
    string rutaVideo;
   
  public:
    Clase();
    Clase(int,string, time_t, time_t,string);
    int getId();
    string getNombre();
    time_t getInicio();
    time_t getFin();
    string getRutaVideo();
    
    void setId(int);
    void setNombre(string );
    void setInicio(time_t);
    void setFin(time_t );
    void setRutaVideo(string );
    // DESTRUCTOR
   virtual ~Clase();
};

#endif