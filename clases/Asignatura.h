#ifndef ASIGNATURA
#define ASIGNATURA

#include "Clase.h"
#include "../datatypes/DtInfoClase.h"
#include <string>
#include <map>

using namespace std;

class Asignatura{
  private:
    string codigo;
    string nombre;
    list<Clase*> clases;
   
  public:
    //Constructores
    Asignatura();
    Asignatura(string, string);
    string getCodigo();
    string getNombre();
    list<Clase*> getClases();

    //Getters & Setters
    void setCodigo(string);
    void setNombre(string);
    void setClases(list<Clase*>);

    // DESTRUCTOR
    ~Asignatura();

    //Metodos
};

#endif