#ifndef ICONTROLADORASISTENCIAACLASEENVIVO
#define ICONTROLADORASISTENCIAACLASEENVIVO

#include "DtAsistir.h"
#include <list>
#include <string>

using namespace std;

class IControladorAClaseEnVivo{
    public:
        virtual list<string> asignaturasInscripto() = 0;
        virtual list<int> clasesOnlineDisponibles(string) = 0;
        virtual DtAsistir selectClase(int) = 0;
        virtual void asistirClaseEnVivo() = 0;
        virtual void cancelar() = 0;
};
#endif