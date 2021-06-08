#ifndef CONTROLADORASISTENCIACLASEENVIVO
#define CONTROLADORASISTENCIACLASEENVIVO

#include "../interfaces/IControladorAsistenciaClaseEnVivo.h"

class ControladorAsistenciaClaseEnVivo: public IControladorAsistenciaClaseEnVivo{
    private:
        string codigo;
        int id;
    public:
        list<string> asignaturasInscripto();
        list<int> clasesOnlineDisponibles(string);
        DtAsistir selectClase(int);
        void AsistirClaseEnVivo();
        void cancelar();
};
#endif