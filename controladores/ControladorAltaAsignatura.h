#ifndef CONTROLADORALTAASIGNATURA
#define CONTROLADORALTAASIGNATURA

#include "../interfaces/IControladorAltaAsignatura.h"
#include "../manejador/ManejadorAsignatura.h"

class ControladorAltaAsignatura: public IControladorAltaAsignatura{
    private:
        DtAsignatura datosAsignatura;
    public:
        DtAsignatura ingresar(DtAsignatura);
        void altaAsignatura();
        void cancelar();
};
#endif