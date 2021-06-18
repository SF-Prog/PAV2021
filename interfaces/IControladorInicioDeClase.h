#ifndef ICONTROLADORINICIODECLASE
#define ICONTROLADORINICIODECLASE

#include "../datatypes/DtIniciarClaseFull.h"
#include "../datatypes/DtPerfil.h"
#include <string>
#include <list>

using namespace std;

class IControladorInicioDeClase{
    public:
        virtual list<string> asignaturasAsignadas() = 0;
        virtual bool selectAsignatura(DtIniciarClase) = 0;
        virtual list<string> inscriptosAsignatura() = 0;
        virtual void habilitar(string) = 0;
        virtual DtIniciarClaseFull datosIngresados() = 0;
        virtual void iniciarClase() = 0;
        virtual void cancelar() = 0;
};
#endif