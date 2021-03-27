#ifndef DTBARCO
#define DTBARCO

#include "DtFecha.h"

#include <string>

using namespace std;

class DtBarco{
  private:
    string nombre;
    string id;
  public:
    DtBarco();
    DtBarco(string, string);
    virtual ~DtBarco();
    void setNombre(string nombre);
    string getNombre();
    void setId(string id);
    string getId();
    friend ostream& operator <<(ostream&,const DtBarco&);
};

#endif