#ifndef CONTROLADORALTAASIGNATURA
#define CONTROLADORALTAASIGNATURA

#include "IControladorAltaAsignatura.h"

class ControladorAltaAsignatura: public IControladorAltaAsignatura{
    private:
        DtAltaAsignatura datosAsignatura;
    public:
        DtAltaAsignatura ingresar(DtAltaAsignatura);
        void altaAsignatura();
        void cancelar();
};
#endif