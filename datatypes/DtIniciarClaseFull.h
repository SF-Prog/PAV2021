#ifndef DTINICIARCLASEFULL
#define DTINICIARCLASEFULL

#include "DtIniciarClase.h"

class DtIniciarClaseFull: public DtIniciarClase{
    private:
        int id;
    public:
        DtIniciarClaseFull();
        DtIniciarClaseFull(string, string, time_t, int);
        int getId();
        void setId(int);
        ~DtIniciarClaseFull();
};
#endif