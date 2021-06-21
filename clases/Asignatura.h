#ifndef ASIGNATURA
#define ASIGNATURA

#include "../clases/Clase.h"
#include "../datatypes/DtInfoClase.h"
#include "../datatypes/DtInstanciaClase.h"
#include <string>
#include <map>

class Clase;
using namespace std;

class Asignatura{
  private:
    string codigo;
    string nombre;
    map<int, Clase*> clases;
   
  public:
    //Constructores
    Asignatura();
    Asignatura(string, string, DtInstanciaClase);

    //Getters & Setters
    string getCodigo();
    string getNombre();
    void setCodigo(string);
    void setNombre(string);
    void setClases(list<Clase*>);
    list<Clase*> getClases();

    // Metodos
    list<DtInfoClase*> getDtInfoClase();
    void agregarClase(Clase*);

    // DESTRUCTOR
    ~Asignatura();

};

#endif