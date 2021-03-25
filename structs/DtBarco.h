#ifndef DTBARCO
#define DTBARCO

#include <string>

using namespace std;

class DtBarco{
  private:
    string nombre;
    string id;
  public:
  
  virtual ~DtBarco();
  friend ostream& operator <<(ostream&,const DtBarco&);
};

#endif