#ifndef DTINFOCLASE
#define DTINFOCLASE

#include "DtPerfil.h"
#include <list>
#include <string>
#include <iostream>

using namespace std;
class Docente;

class DtInfoClase{
    private:
        int id;
        string nombre;
        list<Docente*> docentes;
    public:
        DtInfoClase();
        DtInfoClase(int, string, list<Docente*>);
        friend ostream& operator << (ostream&, DtInfoClase&);
};
#endif