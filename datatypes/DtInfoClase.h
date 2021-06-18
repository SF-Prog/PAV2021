#ifndef DTINFOCLASE
#define DTINFOCLASE

#include <list>
#include <string>
#include <iostream>

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
        friend ostream& operator <<(ostream&, DtInfoClase&);
};
#endif