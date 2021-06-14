#ifndef DOCENTE_H
#define DOCENTE_H

#include "Perfil.h"
#include "Rol.h"
#include <string>
#include <list>

using namespace std;
class Rol;
class Docente: public Perfil{
  private:
    string instituto;
    list<Rol*> roles;
  public:
    //Constructores
    Docente();
    Docente(string, string, string, string, string);
    //Getters y setters
    string getInstituto();
    list<string> asignaturas();
    bool tieneMonitoreo(string);
    void setInstituto(string);
    
    // DESTRUCTOR
    ~Docente();
};

#endif