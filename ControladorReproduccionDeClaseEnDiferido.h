#ifndef CONTROLADORREPRODUCCIONDECLASEENDIFERIDO
#define CONTROLADORREPRODUCCIONDECLASEENDIFERIDO

#include "IControladorReproduccionDeClaseEnDiferido.h"

class ControladorReproduccionDeClaseEnDiferido: public IControladorReproduccionDeClaseEnDiferido{
    private:
        string codigo;
        int id;
    public:
        list<string> asignaturasInscripto();
        list<int> selectAsignatura(string);
        list<DtParticipacion> reproducir();
        void cancelar();
};
#endif
