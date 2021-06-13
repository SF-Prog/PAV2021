#ifndef DTINICIARMONITOREO
#define DTINICIARMONITOREO

#include "DtIniciarClaseFull.h"
#include <list>

using namespace std;

class DtIniciarMonitoreo: public DtIniciarClaseFull{
    private:
        list<string> habilitados;
    public:
        DtIniciarMonitoreo();
        DtIniciarMonitoreo(string, string, time_t, int, list<string>);
        list<string> getHabilitados();
        void setHabilitados(list<string>);
        ~DtIniciarMonitoreo();
};
#endif