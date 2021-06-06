#ifndef ASIGNATURA
#define ASIGNATURA

#include "Clase.h"
#include "../datatypes/DtInfoClase.h"
#include "../datatypes/DtInstanciaClase.h"
#include <string>
#include <map>

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
    string getCodigo();
    string getNombre();
    list<Clase*> getClases();
    list<DtInfoClase> getDtInfoClase();

    //Getters & Setters
    void setCodigo(string);
    void setNombre(string);
    void setClases(list<Clase*>);

    // DESTRUCTOR
    ~Asignatura();

    //Metodos
};

#endif