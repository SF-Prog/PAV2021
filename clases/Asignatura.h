#ifndef ASIGNATURA
#define ASIGNATURA

#include <string>


using namespace std;

class Asignatura{
  private:
    string codigo;
    string nombre;
   
  public:
    Clase();
    Clase(int,string, TimeStamp, TimeStamp,string);
    string getCodigo();
    string getNombre();
    
    
    void setCodigo(string);
    void setNombre(string );

    // DESTRUCTOR
    ~ClaAsignaturase();
};

#endif