#ifndef DOCENTE
#define DOCENTE
#include "Perfil.h"
#include <string>


using namespace std;

class Docente: public Perfil{
  private:
    string instituto;
   
   
  public:
    Docente();
    Docente(string,string, string, string,string);
    string getInstituto();
   

    void setInstituto(string );
    
    // DESTRUCTOR
    ~Docente();
};

#endif