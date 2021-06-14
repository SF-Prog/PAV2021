#ifndef CLASE
#define CLASE

#include "AsisteEnVivo.h"
#include "../datatypes/DtInfoClase.h"
#include <string>
#include <list>
#include <ctime>

class Docente;

using namespace std;

class Clase{
  private:
    int id;
    string nombre;
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
    ~Clase();
};

#endif