#ifndef CONTROLADORASISTENCIAACLASEENVIVO
#define CONTROLADORASISTENCIAACLASEENVIVO

#include "IControladorAClaseEnVivo.h"
#include <list>

using namespace std;

class ControladorAClaseEnVivo: public IControladorAClaseEnVivo{
    private:

    public:
        list<string> asignaturasInscripto();
        list<int> clasesOnlineDisponibles(string);
        DtAsistir selectClase(int);
        void asistirClaseEnVivo();
        void cancelar();
};
#endif