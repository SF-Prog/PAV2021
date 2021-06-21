#ifndef DTINFOMONITOREO
#define DTINFOMONITOREO

#include "DtInfoClase.h"
#include <list>
#include <string>
#include <iostream>

class DtInfoClase;

using namespace std;

class DtInfoMonitoreo: public DtInfoClase{
    private:
        list<string> estudiantes;
    public:
        DtInfoMonitoreo();
        DtInfoMonitoreo(int, string, list<string>, list<string>);
        void setEstudiante(string);
        list<string> getEstudiantes();
        ~DtInfoMonitoreo();

        friend ostream& operator <<(ostream&, const DtInfoMonitoreo&);
};
#endif