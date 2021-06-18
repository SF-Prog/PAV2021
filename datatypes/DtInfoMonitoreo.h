#ifndef DTINFOMONITOREO
#define DTINFOMONITOREO

#include "DtInfoClase.h"
#include <list>
#include <string>

class DtInfoMonitoreo: public DtInfoClase{
    private:
        list<string> estudiantes;
    public:
        DtInfoMonitoreo();
        DtInfoMonitoreo(int, string, list<Docente*>, list<string>);
        void setEstudiante(string);
        list<string> getEstudiantes();
        ~DtInfoMonitoreo();
};
#endif