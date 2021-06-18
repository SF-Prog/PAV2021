#ifndef ICONTROLADORASISTENCIACLASEENVIVO
#define ICONTROLADORASISTENCIACLASEENVIVO

#include "../datatypes/DtAsistir.h"
#include <string>
#include <list>

using namespace std;

class IControladorAsistenciaClaseEnVivo{
    public:
        virtual list<string> asignaturasInscripto() = 0;
        virtual list<int> clasesOnlineDisponibles(string) = 0;
        virtual DtAsistir selectClase(int) = 0;
        virtual void asistirClaseEnVivo() = 0;
        virtual void cancelar() = 0;
};
#endif