#ifndef DOCENTE_H
#define DOCENTE_H

#include "Perfil.h"
#include "Rol.h"
#include "../enum/TipoRol.h"
#include <string>
#include <list>
#include <iostream>

//class Rol;

using namespace std;

class Docente: public Perfil{
  private:
    string instituto;
    list<Rol*> roles;
  public:
    //Constructores
    Docente();
    Docente(string, string, string, string, string);
    Docente(string, string, string, string, string, list<Rol*>);
    //Getters y setters
    string getInstituto();
    void setInstituto(string);
    list<Rol*> getRoles();
    void setRoles(list<Rol*>);

    void agregarAsignatura(Rol*);
    list<string> asignaturas();
    bool tieneMonitoreo(string);
    bool noDictaLaAsignatura(string);
    void eliminarAsignatura(string);
    friend ostream& operator <<(ostream&, Docente*&);
    // DESTRUCTOR
    ~Docente();
};

#endif
