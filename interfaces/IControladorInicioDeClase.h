#ifndef ICONTROLADORINICIODECLASE
#define ICONTROLADORINICIODECLASE

#include "IControladorInicioDeClase.h"
#include "../datatypes/DtPerfil.h"
#include <string>
#include <list>

using namespace std;

class IControladorInicioDeClase{
    public:
        virtual void ingresarDatosPerfil(DtPerfil) = 0;
        virtual void ingresarEstudiante(string) = 0;
        virtual void ingresarDocente(string) = 0;
        virtual void altaUsuario() = 0;
        virtual void cancelar() = 0;
};
#endif