#ifndef CLASE
#define CLASE

#include "../clases/Docente.h"
#include "../clases/Participacion.h"
#include "../clases/AsisteEnVivo.h"
#include "../datatypes/DtInfoClase.h"
#include <string>
#include <list>
#include <map>
#include <ctime>

using namespace std;

class Clase{
  protected:
    int id;
    string nombre;
    
    list<Participacion*> participaciones;
    list<Docente*> docentes;
    list<AsisteEnVivo*> asistenciasEnVivo;
    time_t inicio;
    time_t fin;
    string codigo;
   
  public:
    Clase();
    Clase(int, string, time_t, time_t, string);
    Clase(int, string, Docente*, time_t, string);
    Clase(int, string, list<Docente*>, time_t, time_t, string);
    int getId();
    string getNombre();
    list<Docente*> getDocentes();
    void addDocente(Docente*);
    list<AsisteEnVivo*> getAsistenciasEnVivo();
    void addAsistenciasEnVivo(AsisteEnVivo*);
    time_t getInicio();
    time_t getFin();
    string getCodigo();
    DtInfoClase getDtInfoClase();
    
    void setId(int);
    void setNombre(string );
    void setInicio(time_t);
    void setFin(time_t );
    void setCodigo(string);
    // DESTRUCTOR
   virtual ~Clase();
};

#endif