#ifndef ROL
#define ROL

#include <string>
#include "../enum/TipoRol.h"

using namespace std;

class Rol{
  private:
   TipoRol tipo;
   
  public:
    Rol();
    Rol(TipoRol);

    
    // DESTRUCTOR
    ~Rol();
};

#endif