#ifndef ICONTROLADORALTAASIGNATURA
#define ICONTROLADORALTAASIGNATURA

#include "DtAltaAsignatura.h"

class IControladorAltaAsignatura{
    public:
        virtual DtAltaAsignatura ingresar(DtAltaAsignatura) = 0;
        virtual void altaAsignatura() = 0;
        virtual void cancelar() = 0;
};
#endif