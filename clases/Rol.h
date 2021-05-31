#ifndef ROL
#define ROL

#include <string>


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