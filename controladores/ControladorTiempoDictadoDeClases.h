#ifndef CONTROLADORTIEMPODICTADODECLASES
#define CONTROLADORTIEMPODICTADODECLASES

#include "../interfaces/IControladorTiempoDictadoDeClases.h"

class ControladorTiempoDictadoDeClases: public IControladorTiempoDictadoDeClases{
    public:
        ControladorTiempoDictadoDeClases(/* args */);
        list<DtDictadoAsignatura> tiempoDeClasesDictadas();
        ~ControladorTiempoDictadoDeClases();
};
#endif
