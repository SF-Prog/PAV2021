#ifndef ROL
#define ROL

#include "../enum/TipoRol.h"
#include <string>

class Asignatura;
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
    bool esAsignatura(string);

    // DESTRUCTOR
    ~Rol();
};
#endif
