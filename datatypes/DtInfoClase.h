#ifndef DTINFOCLASE
#define DTINFOCLASE

#include <list>
#include <string>

using namespace std;

class DtInfoClase{
    private:
        int id;
        string nombre;
        list<string> docentes;
    public:
        DtInfoClase(int, string, list<string>);
};
#endif