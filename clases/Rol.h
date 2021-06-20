#ifndef ROL
#define ROL

#include "../enum/TipoRol.h"
#include "../clases/Asignatura.h"
#include <string>
using namespace std;

class Rol{
  private:
   TipoRol tipo;
   Asignatura* asignatura;
   
  public:
    //Constructores
    Rol();
    Rol(TipoRol);
    Rol(TipoRol, Asignatura*);
    //Getters ySetters
    TipoRol getTipo();
    void setTipo(TipoRol);

    string getCodigoAsignatura();
    void setAsignatura(Asignatura*);
    
    // DESTRUCTOR
    ~Rol();
};
#endif