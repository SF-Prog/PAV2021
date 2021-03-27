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
    Barco();
    Barco(string, string);
    void setNombre(string);
    void setId(string);
    string getNombre();
    string getId();
    virtual void arribar(float)=0;
    ~Barco();
};

#endif