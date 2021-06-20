#ifndef CONTROLADORAGREGARDATOS
#define CONTROLADORAGREGARDATOS

#include "../interfaces/IControladorAgregarDatos.h"

class ControladorAgregarDatos: public IControladorAgregarDatos {
public:
    void cargarDatos();
};

#endif //CONTROLADORAGREGARDATOS