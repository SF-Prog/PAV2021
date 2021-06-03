#ifndef ROL
#define ROL

#include "../enum/TipoRol.h"
#include <string>
using namespace std;

class Rol{
  private:
   TipoRol tipo;
   
  public:
    //Constructores
    Rol();
    Rol(TipoRol);

    //Getters ySetters
    TipoRol getTipo();
    void setTipo(TipoRol);
    
    // DESTRUCTOR
    ~Rol();
};

#endif