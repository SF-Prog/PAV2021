#ifndef ASIGNATURA
#define ASIGNATURA

#include "Clase.h"
#include "DtInfoClase.h"
#include <string>
#include <map>

using namespace std;

class Asignatura{
  private:
    string codigo;
    string nombre;
    map<int, Clase*> clases;
   
  public:
    Asignatura();
    Asignatura(int, string, TimeStamp, TimeStamp,string);
    string getCodigo();
    string getNombre();
    DtInfoClase getDtInfoClase();
    
    void setCodigo(string);
    void setNombre(string );

    // DESTRUCTOR
    ~Asignatura();
};

#endif