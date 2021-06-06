#ifndef DOCENTE_H
#define DOCENTE_H

#include "Perfil.h"
#include <string>
#include <list>


using namespace std;

class Docente: public Perfil{
  private:
    string instituto;
  public:
    //Constructores
    Docente();
    Docente(string, string, string, string, string);
    //Getters y setters
    string getInstituto();
    list<string> asignaturas();
   

    void setInstituto(string );
    
    // DESTRUCTOR
    ~Docente();
};

#endif