#ifndef DTINFOCLASE
#define DTINFOCLASE

#include "../clases/Docente.h"
#include <map>
#include <string>

using namespace std;

class DtInfoClase{
    private:
        int id;
        string nombre;
        map<string, Docente*> docentes;
    public:
        DtInfoClase();
        DtInfoClase(int, string, map<string, Docente*>);
};
#endif