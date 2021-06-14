#ifndef DTINFOCLASE_H
#define DTINFOCLASE_H

#include "../clases/Docente.h"
#include <list>
#include <string>

using namespace std;

class DtInfoClase{
    class Docente{};
    private:
        int id;
        string nombre;
        list<Docente*> docentes;
    public:
        DtInfoClase();
        DtInfoClase(int, string, list<Docente*>);
};
#endif