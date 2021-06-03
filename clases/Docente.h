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
    //Constructores
    Docente();
    Docente(string);
    //Getters y setters
    string getInstituto();
    // list<string> asignaturas();
   

    void setInstituto(string );
    
    // DESTRUCTOR
    ~Docente();
};

#endif