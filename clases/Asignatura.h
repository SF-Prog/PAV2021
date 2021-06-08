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

    //Getters & Setters
    string getCodigo();
    string getNombre();
    void setCodigo(string);
    void setNombre(string);
    void setClases(list<Clase*>);

    list<Clase*> getClases();
    list<DtInfoClase> getDtInfoClase();
    void agregarClase(Clase*);

    // DESTRUCTOR
    ~Asignatura();

    //Metodos
};

#endif