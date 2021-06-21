#ifndef DTINFOCLASE
#define DTINFOCLASE

#include <list>
#include <string>
#include <iostream>

class Docente;

using namespace std;

class DtInfoClase{
    protected:
        int id;
        string nombre;
        list<string> docentes;
    public:
        DtInfoClase();
        DtInfoClase(int, string, list<string>);
        friend ostream& operator<<(ostream&, const DtInfoClase&);
        ~DtInfoClase();
};
#endif