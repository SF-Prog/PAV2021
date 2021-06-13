#ifndef CONTROLADORTIEMPODICTADODECLASES
#define CONTROLADORTIEMPODICTADODECLASES

#include "IControladorTiempoDictadoDeClases.h"

class ControladorTiempoDictadoDeClases: public IControladorTiempoDictadoDeClases{
    public:
        ControladorTiempoDictadoDeClases(/* args */);
        list<DtDictadoAsignatura> tiempoDeClasesDictadas();
        ~ControladorTiempoDictadoDeClases();
};
#endif
