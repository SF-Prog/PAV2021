#ifndef DTINFOCLASE
#define DTINFOCLASE

#include "Docente.h"
#include <map>
#include <string>

using namespace std;

class DtInfoClase{
    private:
        int id;
        string nombre;
        list<Docente*> docentes;
    public:
        DtInfoClase();
        DtInfoClase(int, string, list<Docente*>);
};
#endif