#ifndef CONTROLADORALTAASIGNATURA
#define CONTROLADORALTAASIGNATURA

#include "IControladorAltaAsignatura.h"
#include "ManejadorAsignatura.h"

class ControladorAltaAsignatura: public IControladorAltaAsignatura{
    private:
        DtAsignatura datosAsignatura;
    public:
        DtAsignatura ingresar(DtAsignatura);
        void altaAsignatura();
        void cancelar();
};
#endif