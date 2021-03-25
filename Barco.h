#ifndef BARCO
#define BARCO

#include <string>
#include <iostream>

using namespace std;

class Barco{
  private:
    string nombre;
    string id;
  public:
    Barco(string, string);
    void setNombre(string);
    void setId(string);
    string getNombre();
    string getId();
    virtual void arribar(float cargaDespacho);

  virtual ~Barco();
  friend ostream& operator <<(ostream&, const Barco&);
};

#endif