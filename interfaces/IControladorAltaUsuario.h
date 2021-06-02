#ifndef ICONTROLADORALTAUSUARIO
#define ICONTROLADORALTAUSUARIO

#include "DtPerfil.h"
#include <string>

using namespace std;

class IControladorAltaUsuario{
    public:
        virtual void ingresarDatosPerfil(DtPerfil) = 0;
        virtual void ingresarEstudiante(string) = 0;
        virtual void ingresarDocente(string) = 0;
        virtual void altaUsuario() = 0;
        virtual void cancelar() = 0;
};
#endif