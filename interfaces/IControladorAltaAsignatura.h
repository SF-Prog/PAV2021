#ifndef ICONTROLADORALTAASIGNATURA
#define ICONTROLADORALTAASIGNATURA

#include "../datatypes/DtAsignatura.h"

class IControladorAltaAsignatura{
    public:
        virtual DtAsignatura ingresar(DtAsignatura) = 0;
        virtual void altaAsignatura() = 0;
        virtual void cancelar() = 0;
};
#endif