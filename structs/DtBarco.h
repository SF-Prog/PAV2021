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
    virtual ~DtBarco();
    friend ostream& operator <<(ostream&,const DtBarco&);
};

#endif