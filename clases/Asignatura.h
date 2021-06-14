#ifndef ASIGNATURA
#define ASIGNATURA

#include <string>
#include "../datatypes/TimeStamp.h"


using namespace std;

class Asignatura{
  private:
    string codigo;
    string nombre;
   
  public:
    Asignatura();
    Asignatura(string,string);
    string getCodigo();
    string getNombre();
    
    
    void setCodigo(string);
    void setNombre(string );

    // DESTRUCTOR
    ~Asignatura();
};

#endif