#ifndef DTINICIARCLASEFULL
#define DTINICIARCLASEFULL

#include "DtIniciarClase.h"

class DtIniciarClaseFull: public DtIniciarClase{
    private:
        static int idAutoGenerado;
        int id;
    public:
        DtIniciarClaseFull();
        DtIniciarClaseFull(string, string, time_t);
        int getId();
        void setId(int);
        ~DtIniciarClaseFull();
};
#endif