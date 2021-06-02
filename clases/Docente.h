#ifndef DOCENTE
#define DOCENTE
#include "Perfil.h"
#include <string>
#include <map>


using namespace std;

class Docente: public Perfil{
  private:
    string instituto;
  public:
    Docente();
    Docente(string, string, string, string, string);
    string getInstituto();
    list<string> asignaturas();
   

    void setInstituto(string );
    
    // DESTRUCTOR
    ~Docente();
};

#endif