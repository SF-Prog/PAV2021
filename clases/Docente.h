#ifndef DOCENTE_H
#define DOCENTE_H

#include "Perfil.h"
#include <string>
#include <list>

using namespace std;

class Rol; //¿esta bien el fw declaration??

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