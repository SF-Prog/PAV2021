#ifndef DTINFOCLASE
#define DTINFOCLASE

#include <list>
#include <string>

class Docente;

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