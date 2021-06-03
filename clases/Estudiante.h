#ifndef ESTUDIANTE
#define ESTUDIANTE
#include "Perfil.h"
#include <string>


using namespace std;

class Estudiante: public Perfil{
  private:
    string documento;
  public:
    // Contructores
    Estudiante();
    Estudiante(string);
    // Getters y Setters
    string getDocumento();
    void setDocumento(string );
    
    // DESTRUCTOR
    ~Estudiante();
};

#endif
