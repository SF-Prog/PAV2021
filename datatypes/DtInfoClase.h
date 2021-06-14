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
        list<Docente*> docentes;
    public:
        // Constructores
        DtInfoClase();
        DtInfoClase(int, string, list<Docente*>);
        // Getters y Setters

        // Destructores
        ~DtInfoClase();
};
#endif