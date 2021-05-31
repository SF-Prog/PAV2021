#ifndef CLASE
#define CLASE

#include <string>


using namespace std;

class Clase{
  private:
    int id;
    string nombre;
    TimeStamp inicio;
    TimeStamp fin;
    string rutaVideo;
   
  public:
    Clase();
    Clase(int,string, TimeStamp, TimeStamp,string);
    int getId();
    string getNombre();
    TimeStamp getInicio();
    TimeStamp getFin();
    string getRutaVideo();
    
    void setId(int);
    void setNombre(string );
    void setInicio(TimeStamp );
    void setFin(TimeStamp );
    void setRutaVideo(string );
    // DESTRUCTOR
   virtual ~Clase();
};

#endif