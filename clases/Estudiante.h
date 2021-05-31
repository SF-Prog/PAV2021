#ifndef ESTUDIANTE
#define ESTUDIANTE
#include "Perfil.h"
#include <string>


using namespace std;

class Estudiante: public Perfil{
  private:
    string documento;
   
   
  public:
    Estudiante();
    Estudiante(string,string, string, string,string);
    string getDocumento();
   

    void setDocumento(string );
    
    // DESTRUCTOR
    ~Estudiante();
};

#endif