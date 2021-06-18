#ifndef CLASE
#define CLASE

#include "AsisteEnVivo.h"
#include "AsisteDiferido.h"
#include "Participacion.h"
#include "../datatypes/DtInfoClase.h"
#include <string>
#include <list>
#include <map>
#include <ctime>

class Docente;

using namespace std;

class Clase{
  private:
    static int idAutoGenerado;
    int id;
    string nombre;
    list<Docente*> docentes;
    list<AsisteEnVivo*> asistenciasEnVivo;
    list<AsisteDiferido*> asistenciasDiferido;
    map<int, Participacion*> participaciones;
    time_t inicio;
    time_t fin;
    string codigo;
   
  public:
    Clase();
    Clase(string, time_t, time_t, string);
    Clase(string, Docente*, time_t, string);
    Clase(string, list<Docente*>, time_t, time_t, string);
    int getId();
    string getNombre();
    list<Docente*> getDocentes();
    map<int, Participacion*> getParticipaciones();
    void addDocente(Docente*);
    list<AsisteEnVivo*> getAsistenciasEnVivo();
    void addAsistenciasEnVivo(AsisteEnVivo*);
    time_t getInicio();
    time_t getFin();
    string getCodigo();
    DtInfoClase getDtInfoClase();

    void addParticipacion(Participacion*);
    
    void setId(int);
    void setNombre(string );
    void setInicio(time_t);
    void setFin(time_t );
    void setCodigo(string);
    // DESTRUCTOR
    virtual ~Clase();
};

#endif