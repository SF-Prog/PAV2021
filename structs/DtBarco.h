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
    string getId();
    ~DtBarco();
    friend ostream& operator <<(ostream&,const DtBarco&);
};

#endif